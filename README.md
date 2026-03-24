*This project has been created as part of the 42 curriculum by vaktas.*

Get_Next_Line - @42Istanbul

EN:

# **Description**
Get_Next_Line is the second project of the 42 school curriculum. The goal of this project is to write a function that returns a line read from a file descriptor.

This project introduces the concept of static variables in C programming and focuses on dynamic memory management. By implementing GNL, a programmer learns how to manage data persistence between function calls and how to handle memory efficiently when the size of the input is unknown.

### The Project: Detailed Overview
The project focuses on three main technical pillars:

Static Variables: Using static variables to preserve data between successive calls to get_next_line, allowing the function to "remember" where it left off in the file descriptor.

Memory Management: Precise allocation and deallocation of memory using malloc and free to prevent memory leaks, especially when dealing with various BUFFER_SIZE values.

Buffer Handling: Developing a robust algorithm that can handle different buffer sizes—from 1 byte to millions of bytes—while correctly identifying the newline (\n) character.

# **Instructions**

### Compilation
The function is compiled along with its utility files. The BUFFER_SIZE must be specified during compilation:

To compile with a specific buffer size:

Bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl

### Execution
To use this function in your C projects, include the header file:

C
#include "get_next_line.h"
Then, you can call the function in a loop to read a file line by line:

C
char *line;
int fd = open("test.txt", O_RDONLY);

while ((line = get_next_line(fd)))
{
    printf("%s", line);
    free(line);
}

# **Resources**
Static Variables in C: Understanding the scope and lifetime of static variables.

File Descriptors (fd): Detailed guide on Linux file descriptors and I/O operations.

The read() System Call: Linux man pages for reading from a file descriptor.

Memory Leaks & Valgrind: Essential tools for debugging memory issues in C.

42 Norminette: The official coding standard guide for 42 projects.

### AI Usage Disclosure
Artificial Intelligence (specifically Gemini) was utilized in this project for the following tasks:

Edge Case Simulation: AI was used to brainstorm critical scenarios such as BUFFER_SIZE=1, files ending without a newline, and empty files to ensure the function's stability.

Logic Refinement: AI assisted in visualizing the interaction between the static buffer and the line extraction process to prevent "off-by-one" errors.

Documentation: AI helped structure the English and Turkish technical descriptions to maintain a consistent professional tone across the 42 curriculum portfolio.

*Bu proje, 42 müfredatının bir parçası olarak vaktas tarafından oluşturulmuştur.*

Get_Next_Line - @42Istanbul

TR:

# **Açıklama**
Get_Next_Line, 42 müfredatının ikinci projesidir. Bu projenin amacı, bir dosya tanımlayıcıdan (file descriptor) okunan veriyi her çağrıldığında bir satır olarak döndüren bir fonksiyon yazmaktır.

Bu proje, C programlamada statik değişken (static variable) kavramını tanıtır ve dinamik bellek yönetimine odaklanır. GNL projesi sayesinde bir yazılımcı, fonksiyon çağrıları arasında verinin nasıl korunacağını ve girdi boyutu bilinmediğinde belleğin nasıl verimli yönetileceğini öğrenir.

### Projeye Genel Bakış
Proje üç ana teknik temel üzerine kuruludur:

Statik Değişkenler: get_next_line fonksiyonunun ardışık çağrılar arasında veri saklamasını sağlamak için statik değişkenlerin kullanılması, böylece fonksiyonun dosya içinde nerede kaldığını "hatırlaması".

Bellek Yönetimi: Özellikle değişken BUFFER_SIZE değerleriyle çalışırken bellek sızıntılarını (memory leaks) önlemek için malloc ve free ile hassas bellek yönetimi.

Tampon (Buffer) Yönetimi: 1 byte'tan milyonlarca byte'a kadar farklı tampon boyutlarında çalışabilen ve yeni satır (\n) karakterini doğru şekilde tanımlayabilen dayanıklı bir algoritma geliştirilmesi.

# **Talimatlar**

### Derleme
Fonksiyon, yardımcı dosyalarıyla birlikte derlenir. Derleme sırasında BUFFER_SIZE değerinin belirtilmesi zorunludur:

Belirli bir tampon boyutu ile derlemek için:

Bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl

### Kullanım
Bu fonksiyonu C projelerinizde kullanmak için başlık dosyasını dahil edin:

C
#include "get_next_line.h"
Ardından, bir dosyayı satır satır okumak için fonksiyonu bir döngü içinde çağırabilirsiniz:

C
char *line;
int fd = open("test.txt", O_RDONLY);

while ((line = get_next_line(fd)))
{
    printf("%s", line);
    free(line);
}

# **Kaynaklar**
C Dilinde Statik Değişkenler: Statik değişkenlerin kapsamı ve yaşam döngüsünü anlama.

Dosya Tanımlayıcılar (File Descriptors): Linux dosya tanımlayıcıları ve I/O işlemleri üzerine detaylı rehber.

read() Sistem Çağrısı: Bir dosya tanımlayıcıdan okuma yapmaya yönelik Linux "man" sayfaları.

Bellek Sızıntıları ve Valgrind: C dilindeki bellek sorunlarını gidermek için temel araçlar.

42 Norminette: 42 projeleri için resmi kod yazım standartları kılavuzu.

### Yapay Zeka Kullanım Beyanı
Bu projede Yapay Zeka (özellikle Gemini), aşağıdaki görevler için kullanılmıştır:

Uç Durum Simülasyonu: Fonksiyonun kararlılığını sağlamak için BUFFER_SIZE=1, satır sonu karakteri olmayan dosyalar ve boş dosyalar gibi kritik senaryolar üzerinde fikir alışverişinde bulunuldu.

Mantıksal İyileştirme: Statik tampon ile satır ayıklama işlemi arasındaki etkileşimin görselleştirilmesinde ve "bir sayı farkla hata" (off-by-one) risklerinin önlenmesinde AI desteği alındı.

Dokümantasyon: Bu README dosyasındaki teknik açıklamaların, 42 müfredat portföyüyle uyumlu ve profesyonel bir dilde yapılandırılmasına yardımcı olundu.