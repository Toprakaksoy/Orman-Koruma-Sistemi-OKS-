# Orman-Koruma-Sistemi-OKS-
Ormanları korumayı amaçlayan bir elektronik sistem geliştirildi.

## Projeyi Geliştirenler
- Oğuz Asaf Kılıç
- Toprak Aksoy

## Özetle Bu Projede...
- Ormanlarımız dünyamızın ciğerleridir. Hayatımızın ve geleceğimizin en önemli parçalarından biridir. Dünyada ve yurdumuzda her yıl çok sayıda orman yangını çıkmaktadır. Bu yangınlar bazen erken söndürülebilmiş; ancak bazen günlerce hatta haftalarca sürmüştür. Yangınlar hem insanları hem de canlı yaşamını tehdit etmektedir. Bunları önleyebilmek için erken uyarı sistemlerine ihtiyacımız var. Bu konuda
hayata geçirilen her proje Orman Bölge Müdürlüğü’nün yangın tespit sistemlerine fayda sağlayacaktır. Çıkan yangınların önceden ve kısa sürede ilgili birimleri uyaracak bir uyarı sistemi olan Orman Koruyucu Sistemi tasarladık. OKS (Orman Koruyucu Sistemi) ormanların belirli bölgelerine yerlestirilen, ardunio ile programlanmış, ısı duman ve nem değişikliğini hemen farkeden, yangın izleme kuleleri itfaiye gibi yangın kurumlarına erken uyarı sinyali gönderen bir sistem olacaktır. Bu proje yapacağımız ısı nem ve duman sensörlü cihazlarımızla aynı zamanda orman yangınlarında hava kalitesinin ölçülerek zehirli, yanıcı ve patlayıcı gaz tespiti de yapacaktır. Bu sistem sayesinde orman yangınlarının çok fazla büyümeden tesbit edilip önlenmesini amaçlıyoruz.

## Projenin Çözüm Getirdiği Sorunlar
- Orman yangınlarının çıkmasında başlıca faktör insandır (Baş, R., 1965). Orman yangınlari çıktığında genelde çok geç farkedilebilmekte ve sondurmesi oldukca guc hale gelmektedir. Çıkan yangını kontrol altına alıncaya kadar ise birçok ağaç ve onunla birlikte birçok canlı yanarak ölmektedir. Bu yangınlarda çok fazla ağaç kaybı yaşandığı için ülke ekonomisine ve dogal yasam alanlarina zarar vermektedir. Bunun dışında yangınlarin sondurulmesinin arkasinda çevre kirliliğine de yol açmaktadır. Orman yanginlarini onlemek adina bir cok tedbir
alinmistir. Yangının çıkar çıkmaz görülmesinde aşağıdaki yöntem ve kaynaklardan yararlanılır:

### Sabit Gözetleme Noktaları (Yangın Kule ve Kulübeleri)
- Yangının gözetiminde yararlanılan yukarıda adı geçen yöntem ve kaynaklardan bugün Türkiye'de geniş bir şekilde kullanılanı sabit gözetleme noktalarıdır ( Bilgili E., 2014). Sabit gözetleme noktaları yangın kule ve kulübelerinden oluşur. Her kule veya kulübeye
Yangın Gözetleme Aleti yerleştirilir. Ancak bu aletin kullanımında kuledeki gözetleyicilere iş düşmektedir ve bu iş geceleri yanlışlıklara neden olmaktadır.
### Havadan Gözetleme
- Uçak ve helikopterler, özellikle kule ve kulübeler tarafından görülemeyen orman alanları üzerinde uçarak yardımcı olurlar. Bu yöntemden, mevcut olanaklar oranında ve özellikle yangının fazla tehlikeli olduğu, gözden uzak alanlarda yararlanılmaktadır. Fakat bu araçların sürekli uçuşlarındaki yüksek maliyet dikkate alınarak, bunlara yangın tehlikesine göre periyodik uçuşlar
yaptırılmalıdır (Bilgili E., 2014).
### Gezici Gözeticiler
- Orman yanginlarinin yogun yasandigi veya yasanabilecegi ihtimali dusunulerek gorevlendirilen kisiler bulunmaktadir. Gezici gozeticiler, her zaman basvurulan yontemlerden degildir.
## Projenin Çözüm Önerisi
Yukaridaki onlemler uygulama alani kisitli ve oldukca maliyetlidir. Bu nedenle bu proje kapsaminda OKS sistemini gelistirdik. 7 gun 24 saat; ısı ,nem,duman durumu degısıklıgını farkederek hava kalıtesı olculerek zehırlı, yanıcı, patlayıcı gaz tespıtı yapılarak erken uyarıyı yangın kulube ve kulelerıne en hızlı sekılde ıletılecektır.Boylece yangının daha baslangıcındayken tespıtı ve kotu sonuclara sebep olmadan gereklı yerlere uyarı verılerek erken mudehalesı saglanabılmektedır. Tasarladığımız OKS (Yangin Koruyucu Sistemi)
ormanlara yerlestirilerek ısı nem duman değişikliklerini hemen farkedecek ve yangın izleme kulelerine sinyal gönderecektir.
### Projede Kullanılan Malzemeler
- Arduino Uno
- Piezo Buzzer
- HC-05 Bluetooth Sensor
- MQ9 - Carbon Gas Sensor
- MQ7 - Propane Gas Sensor
- DHT11 - Humidity and Temperature Sensor
- 10K Ohm Resistor
- 1K Ohm Resistor
#### Projenin Kurulmuş Hali
- Projenin kurulmuş hali aşağıdaki görseldeki gibidir.
  ![devre_Semasi](https://github.com/Toprakaksoy/Orman-Koruma-Sistemi-OKS-/assets/134775576/9dc9e593-e76b-47dc-b025-df943a67a632)
### Yeterlilik ve Özgünlük Tarafı
- Bu zamana kadar orman yangınlarını önlemek, erken müdahale etmek adına birçok çalışma yapılmıştır. Bu projeyi diğer çalışmalardan ayıran fark, hem elektroniğin hem de programlamanın bir arada kullanıldığı basit bir tasarıma sahip olmasidir. Üstelik proje düşük maliyetli olduğundan uygulunabilirliği ve sürdürülebilirliği yüksektir. Ayrıca programlanın açık ve geliştirilebilir olması kullandıkça görülen eksikliklerin ve doğacak ihtiyaçların da tasarlayacağımız proje çalışmamıza katkı sağlayacaktır.
### Hedef Kitle
- Bu projenin hedef kitlesi orman yangınlarıyla mücadele eden birimler ve ormanlık alanda yaşayan halktır. Daha da genısletecek olursak onune gecılemeyen her yangının cografyamız ve ıklım sartlarınıda buyuk oranda olumsuz etkıleyecegı ıcın ulkemizdeki herhangi bir ormanlik alanda kullanilabilir. Dolayısıyla projemiz özellikle Orman Bölge Müdürlüğü’nün işini kolaylaştıracaktır. Erken uyarı sistemi olacak bu proje sayesinde ormanlık alanda yaşayan insanlar ve yangın söndürme birimleri yangının çıktığı yere hızlıca ulaşıp yangın büyümeden müdahale edeceklerdir. Ayrıca Orman Bolge Mudurlugu’ne sureklı olarak belırlı aralıklarla degısıklıklerın raporu bıldırılecektır. Boylece kotuye gıdebılecek bır durumun farkına erkenden varılmıs olunacaktır.
## Proje ile ilgili Görseller ve Video
![image1](https://github.com/Toprakaksoy/Orman-Koruma-Sistemi-OKS-/assets/134775576/fa629ab4-45fb-4a27-8117-f4a16bb59cc3)

## Kaynakça
-Bilgili E., (2014), Orman Koruma Dersı̇ Geçicı̇ Ders Notları (Yayınlanmamış), Karadeniz Teknik Üniversitesi, Trabzon, ss.13–56.
- BAŞ, R., 1965: Türkiye' de Orman Yangınları Problemi ve Bazı Klimatik Faktörlerin Yangın/ara Etkileri Üzerine Araştırma/ar. Tarım Bakanlığı Orman Genel Müdürlüğü Yayınlarından, Sıra No. 421, Seri No. 20, İstanbul, IV+97 

