# Android Üzerinde Linux: Termux X11 Masaüstü Ortamları
Termux X11 ile ses desteğine sahip masaüstü ortamlarını başlatmak için kullanılan betik koleksiyonu. Tercih ettiğiniz Linux dağıtımını kurmak ve bağlanmak için gerekli tüm bilgileri burada bulabilirsiniz.
### ⚠️ Güncellemeden önceki bilgileri görmek isterseniz buraya göz atın: README_old.md
### Tüm detaylı anlatımları kanalımızda bulabilirsiniz: binbash_<
# 📚 İçindekiler
* 🏁 İlk Adımlar
* ⚔️ Termux native VS Proot-distro VS Chroot
* 🐧 Proot dağıtımları kurulumu: Alpine, Ubuntu, Debian, Arch, Kali Nethunter, Parrot OS, PostMarket OS
* 💀 Chroot dağıtımları kurulumu: Ubuntu, Debian, Box64Droid
* 💻 Termux Native Masaüstü Kurulumu
* 🔥 Termux'ta Donanım Hızlandırma
---
## Linux Ortamları Önizleme
Tüm ortamlar XFCE4 Masaüstü ile yapılandırılmıştır ancak isterseniz değiştirebilirsiniz.

| Proot distro (Debian) | Native | Chroot (Debian) |
| :--- | :--- | :--- |
| Önizleme Mevcut | Önizleme Mevcut | Önizleme Mevcut |

---
# 🏁 İlk Adımlar
Android cihazınızda tam bir Linux masaüstü deneyimi yaşamak için Termux ve Termux X11 kullanacağız.
Termux'ta kurmanız gereken temel paketler:
pkg update
pkg upgrade
pkg install x11-repo
pkg install termux-x11-nightly
pkg install tur-repo
pkg install pulseaudio
pkg install proot-distro
pkg install wget
pkg install git
---
# ⚔️ Termux native VS Proot-distro VS Chroot
Android cihazınızda Linux kurarken seçebileceğiniz birkaç farklı seçenek vardır. Aralarındaki farkları anlamak, ihtiyaçlarınıza en uygun ortamı seçmenize yardımcı olabilir:
### 1. Termux Native
Termux native, herhangi bir ek sanallaştırma veya konteyner olmadan doğrudan Termux uygulaması içinde Linux komutlarını çalıştırmayı ifade eder. Android cihazınızda Linux araçlarına erişmek için hafif ve basit bir yol sağlar.
### 2. Proot-Distro
Proot-Distro, tam bir Linux dağıtımını bir chroot ortamında çalıştırmak için proot kullanan bir yöntemdir. Bu yaklaşım, root erişimi olmadan çok çeşitli Linux dağıtımlarını kurmanıza ve kullanmanıza olanak tanır. Ancak, yerel kurulumlara kıyasla bazı sınırlamaları olabilir.
### 3. Chroot
Chroot, mevcut çalışan işlem ve çocukları için görünür kök dizini değiştiren bir Unix komutudur. Android'de Linux çalıştırma bağlamında, chroot genellikle Android sisteminin yanında ayrı bir Linux ortamı oluşturmak için kullanılır. Termux native'e göre daha izole bir ortam sağlasa da, daha gelişmiş kurulum ve ek araçlar gerektirebilir.
#### Özet
- Termux Native: Basit ve hafif, ancak tam Linux dağıtımlarına göre sınırlı yeteneklere sahip.
- Proot-Distro: Root erişimi olmadan tam Linux dağıtımlarını çalıştırmaya izin verir, ancak bazı sınırlamaları olabilir.
- Chroot: Daha izole bir ortam sağlar ancak daha karmaşık kurulum ve ek araçlar gerektirir.
---
## Android'de Linux Ortamlarının Karşılaştırması

| Özellik | Proot | Native | Chroot |
| :--- | :--- | :--- | :--- |
| Root Gerekir mi? | ❌ (Hayır) | ❌ (Hayır) | ✅ (Evet) |
| Çok Sayıda Uygulama? | ✅ (Evet) | ❌ (Sınırlı) | ✅ (Evet) |
| Performans | Orta 💼 | İyi 🚀 | İyi 🚀 |

---
## 🐧 Proot dağıtımları kurulumu: Alpine, Ubuntu, Debian, Arch, Kali Nethunter, Parrot OS, PostMarket OS
Alpine, Ubuntu, Debian, Arch, Kali NetHunter, Parrot OS, PostMarket ve Void Linux kurulumları için ilgili dökümanlara göz atabilirsiniz.
---
## 💀 Chroot dağıtımları kurulumu: Ubuntu, Debian, Box64Droid
Root yetkisi olan cihazlar için Ubuntu, Debian, Box64Droid (Ubuntu), Arch ve Fedora kurulumlarını gerçekleştirebilirsiniz.
---
## 💻 Termux Native Masaüstü Kurulumu
Yerel bir Termux Masaüstü ve mevcut tüm uygulamaları yüklemek için gerekli tüm bilgilere dökümantasyon kısmından ulaşabilirsiniz.
Hazırlayan: binbash_<
