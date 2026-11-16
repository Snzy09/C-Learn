#!/usr/bin/env bash
# ==============================================================================
# Skrip Otomasi Pengerjaan Modul Praktikum C-Learn
# Jadwal: Setiap Sabtu pukul 20:00 (Cron: 0 20 * * 6)
# ==============================================================================

set -euo pipefail

PRAKTIKUM_DIR="/home/snzy09/projects/IF25-11002-Praktikum-Pemrograman"
C_LEARN_DIR="/home/snzy09/projects/C-Learn"
LOG_FILE="/home/snzy09/projects/C-Learn/cron_solve.log"

echo "[$(date '+%Y-%m-%d %H:%M:%S')] Memulai proses pengerjaan otomatis modul praktikum..." | tee -a "$LOG_FILE"

# 1. Pastikan repositori materi terupdate
if [ -d "$PRAKTIKUM_DIR" ]; then
    echo "[$(date '+%Y-%m-%d %H:%M:%S')] Menarik update materi terbaru dari upstream..." | tee -a "$LOG_FILE"
    cd "$PRAKTIKUM_DIR"
    git pull origin main || true
else
    echo "[$(date '+%Y-%m-%d %H:%M:%S')] Cloning repositori praktikum..." | tee -a "$LOG_FILE"
    git clone https://github.com/informatika-itera/IF25-11002-Praktikum-Pemrograman.git "$PRAKTIKUM_DIR"
fi

# 2. Cari pertemuan berikutnya yang belum ada di C-Learn
cd "$C_LEARN_DIR"
NEXT_MEETING=""

for m in 13 14 15 16; do
    if [ ! -d "$C_LEARN_DIR/P$m" ]; then
        NEXT_MEETING="P$m"
        break
    fi
done

if [ -z "$NEXT_MEETING" ]; then
    echo "[$(date '+%Y-%m-%d %H:%M:%S')] Semua pertemuan (hingga P16) sudah dikerjakan!" | tee -a "$LOG_FILE"
    exit 0
fi

echo "[$(date '+%Y-%m-%d %H:%M:%S')] Pertemuan selanjutnya yang akan dikerjakan: $NEXT_MEETING" | tee -a "$LOG_FILE"

# 3. Jalankan agy untuk menyelesaikan modul
PROMPT="Kamu adalah asisten pengembang otomatis. Tugasmu adalah menyelesaikan modul $NEXT_MEETING untuk repositori C-Learn ($C_LEARN_DIR) berdasarkan bahan di $PRAKTIKUM_DIR/02 Hands-on/.
Detail langkah:
1. Pelajari folder $PRAKTIKUM_DIR/02 Hands-on/ yang sesuai dengan $NEXT_MEETING (README.md, latihan/, input/, expected/).
2. Buat folder $C_LEARN_DIR/$NEXT_MEETING/ dan selesaikan semua kode .cpp. Kompilasi dengan g++ dan pastikan lulus output pengujian.
3. Buat file $C_LEARN_DIR/$NEXT_MEETING/answer.md lengkap dengan identitas Nama: M Ikhsan Candra Putra, NIM: 126140138, Sub-CPMK, ringkasan konsep, kode program, trace table, dan penjelasan perbaikan kode.
4. Perbarui $C_LEARN_DIR/README.md dengan menambahkan entri modul $NEXT_MEETING ke daftar isi dan ringkasan fitur.
5. Commit ke git dengan pesan 'feat($NEXT_MEETING): implementasi hands-on dan dokumentasi'.
6. Push perubahan ke remote git origin main."

/home/snzy09/.local/bin/agy -p "$PROMPT" --dangerously-skip-permissions 2>&1 | tee -a "$LOG_FILE"

echo "[$(date '+%Y-%m-%d %H:%M:%S')] Selesai memproses modul $NEXT_MEETING." | tee -a "$LOG_FILE"
