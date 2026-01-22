### Jawaban Bagian A :

### ***No 1***: 
jawaban: <a href="/assets/ssno1.png"><code>jawaban soal-1</code></a>
### ***No 2***:
<ol type="a">
    <li>1.git clone:berfungsi untuk mengclone repo kedalam vscode
        2.git add:menambahkan perubahan yang nantinya akan di commit
        3.git pull:mengupdate perubahan yang terdapat pada repo pada branch ataupun main bedasarkan commit terbaru
        4.git merge:menggabungkan 2 branch ke dalam satu perubahan
    <li> jawaban: <a href="/assets/ssno2b.png"><code>jawaban soal-2b</code></a>
    <li> jawaban: <a href="/assets/ssno2c.png"><code>jawaban soal-2c</code></a>
    <li>  jawaban: <a href="/assets/ssno2d.png"><code>jawaban soal-2d</code></a>
    <li> jawaban: <a href="/assets/ssno2e.png"><code>jawaban soal-2e</code></a>
</ol>

### ***No 3***:
<ol type="a">
    <li>jawaban: <a href="/assets/ssno3.png"><code>jawaban soal-3a</code></a>
    <li>Fitur Utama:
    1. Flight Planning: Mengatur misi terbang otomatis
    2. Telemetry : Monitoring UAV real time
    3. Parameter Tuning: konfigurasi dan kalibrasi sistem
    4. Map and Geofencing: Navigasi dan keamanan kendaraan.
    <li>jawaban: -
</ol>

### ***No 4***:
<ol type="a">
    <li>jawaban: <a href="/assets/ssno4a.png"><code>jawaban soal-4a</code></a>
    <li>jawaban: <a href="/assets/ssno4b.png"><code>jawaban soal-4b</code></a>
    <li>jawaban: <a href="/assets/ssno4c.png"><code>jawaban soal-4c</code></a>
</ol>

### ***No 5***:
<ol type="a"> 
<li>Klarifikasinya:
    <ol type="i"> 
    <li>VTOL: 
        <ol type="1"> 
            <li> mekanisme:gaya angkat berasal dari baling baling.bisa lepas landas dan mendarat secara vertikal dan hover(diam di udara)
            <li> karakteristik:sangat manuver,cocok area sempit,konsumsi energi tinggi
            <li> jangkauan dan enduranse relatif pendek
            <li> aplikasi:inspeksi,fotografi udara,pemetaan area kecil
        </ol>
    <li>HTOL: 
        <ol type="1">
            <li>mekanisme:gaya angkat dihasilkan oleh sayap saat UAV bergerak maju,membutuhkan runway atau launcher
            <li>karakterisitik:efisiensi energi tinggi,jarak tempuh jauh,tidak bisa hover,manuver terbatas
            <li>aplikasi:pemetaan area luas,survey pertanian,long range surveilance
    </ol>
    <li>Hybrid UAV:
        <ol type="i">
            <li>mekanisme:kombinasi rotary wing untuk lepas landas,fixed wing untuk cruise
            <li>karakteristik: fleksibel,lebih kompleks secara mekanik dan kontrol
            <li>aplikasi: pemetaan luas tanpa runway,operasi di medan yang berat.
        </ol>
    </ol>
    <li>Konsep Gerak dan Parameter Navigasi UAV
        <ol type="1">
            <li>Roll, Pitch, Yaw: 
                <ol type="a">
                    <li>Roll → rotasi terhadap sumbu memanjang (kiri–kanan)
                    <li>Pitch → rotasi terhadap sumbu lateral (naik–turun)
                    <li>Yaw → rotasi terhadap sumbu vertikal (arah hadap)
                </ol>
            <li>Air Speed vs Ground Speed: 
                <ol type="a">
                    <li>Air speed → kecepatan UAV relatif terhadap udara
                    <li>Ground speed → kecepatan UAV relatif terhadap tanah,Hubungan: Ground Speed = Air Speed + Wind Velocity
                </ol>
            <li> HDOP (Horizontal Dilution of Precision) ***
                <ol type="a">
                    <li>Mengukur kualitas geometri satelit GPS
                    <li>Nilai kecil → akurasi posisi horizontal tinggi
                    <li>Nilai besar → posisi kurang presisi
                </ol>
            <li>RSSI (Received Signal Strength Indicator) ***
            <ol type="a">
                <li>Mengukur kekuatan sinyal komunikasi
                <li>Digunakan untuk:Monitoring link UAV–GCS,Fail-safe (Return to Launch)
            </ol>
        </ol>
    <li>Komponen UAV dan Diagram Blok (Misi Pemetaan)
     Komponen Utama :
    <ol type="1">
    <li>Flight Controller:
        <ol type="i">
            <li> Otak UAV
            <li> Menjalankan kontrol PID, EKF, navigasi
        </ol>
    <li>Sensor:
        <ol type="i">
            <li> IMU (gyro, accelerometer)
            <li> GPS
            <li> Magnetometer
            <li> Barometer
        </ol>
    <li> Propulsion System:
        <ol type="i">
            <li>Motor
            <li>ESC
            <li>Propeller
        </ol>
    <li>Power System:
        <ol type="i">
            <li>Baterai
            <li>Power Distribution Board
        </ol>
    <li>Communication:
        <ol type="i">
            <li>Telemetry radio
            <li>RC receiver
        </ol>
    <li>Payload (Pemetaan):
        <ol type="i">
            <li>Kamera
            <li>Gimbal
            <li>Data storage
        </ol>
    </ol>
</ol>   

### ***No 6***:
<ol type="a"> 
    <li>A*: adalah sebuah algoritma pathfinding dengan sistem shortest distance f = g+ h dengan g adalah jarak sebenarnya dari node ke flag dan h adalah jarak estimasi cost dari node flag biasanya pakai manhatan distanse (|x-xg|+|y-yg|) nah biasanya prosesnya dari camera(scan objek sekitar)-> detect obstacle ->lalu buat parse ke opencv -> buat grid map-> lalu jalankan A* bedasarkan gridmap.
    <li>D*:D* sendiri merupakan algoritma dinamic A* dengan alur goal->start beda dengan A* yang alurnya start->goal. 
    <li>PID dalam bahasa sederhanyanya metode kontrol umpa balik/feedback control untuk mencapai target sexara stabil dan cepat 
    <li>Kalman FIlter adalah algoritma estimasi keadaan biasa dipakai untuk menghubungkan data sensro yang bising(noise) agar kita dapat perkiraan kondisi yang lebih akurat. alurnya menebak keadaan sekrang -> mengoreksi tebakan dengan sensor -> ulangi.
</ol>