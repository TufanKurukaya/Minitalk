
# Minitalk

**Minitalk**, basit bir mesajlaşma protokolü geliştirme projesidir. Bu proje, sinyaller kullanarak bir sunucu ve istemci arasında iletişim kurulmasını sağlar. 42 projesi kapsamında geliştirilmiştir ve Unix sinyalleri ile haberleşme mantığını öğretmeyi amaçlar.

## İçindekiler
- [Özellikler](#özellikler)
- [Kurulum](#kurulum)
- [Kullanım](#kullanım)
- [Proje Yapısı](#proje-yapısı)

## Özellikler
- Sunucu ve istemci arasında sinyallerle haberleşme.
- Mesajları karakter karakter gönderebilme.
- Maksimum güvenilirlik için hata kontrolü.
- Sabit ve değişken mesaj uzunlukları ile çalışma.

## Kurulum

### Gereksinimler
- Linux/macOS işletim sistemi.
- GCC derleyicisi.
- Makefile.

### Derleme
Projeyi yerel makinenize klonlayın:
```bash
git clone https://github.com/TufanKurukaya/Minitalk.git
```

Daha sonra, proje dizininde şu komutu çalıştırarak derleyin:
```bash
make
```

## Kullanım
Öncelikle sunucuyu başlatın:
```bash
./server
```
Sunucu PID'sini aldıktan sonra, istemciyi şu şekilde çalıştırarak bir mesaj gönderin:
```bash
./client [server_pid] "mesajınız"
```

### Örnek
1. Sunucuyu başlatın ve PID'yi alın:
```bash
./server
```

2. İstemci ile sunucuya mesaj gönderin:
```bash
./client 12345 "Merhaba Dünya"
```

## Proje Yapısı
```
Minitalk/
├── server.c       # Sunucu kodu
├── client.c       # İstemci kodu
├── Makefile       # Derleme dosyası
└── includes/      # Başlık dosyaları
```
