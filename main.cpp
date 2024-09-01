#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// Fungsi untuk inisiasi matriks
void inisiasiMatriks(int matriks[MAX_SIZE][MAX_SIZE], int baris, int kolom)
{
    printf("Masukkan elemen matriks:\n");
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            printf("M[%d][%d] = ", i, j);
            cin >> matriks[i][j];
        }
    }
    printf("Matriks yang telah diinisiasi:\n");
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk menjumlahkan dua matriks
void penjumlahanMatriks(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int baris, int kolom)
{
    int hasil[MAX_SIZE][MAX_SIZE];
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            hasil[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Hasil Penjumlahan:\n");
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk mengurangi dua matriks
void penguranganMatriks(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int baris, int kolom)
{
    int hasil[MAX_SIZE][MAX_SIZE];
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            hasil[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("Hasil Pengurangan:\n");
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk mengalikan dua matriks
void perkalianMatriks(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int barisA, int kolomA, int kolomB)
{
    int hasil[MAX_SIZE][MAX_SIZE];
    for (int i = 1; i <= barisA; i++)
    {
        for (int j = 1; j <= kolomB; j++)
        {
            hasil[i][j] = 0;
            for (int k = 1; k <= kolomA; ++k)
            {
                hasil[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Hasil Perkalian:\n");
    for (int i = 1; i <= barisA; i++)
    {
        for (int j = 1; j <= kolomB; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk perkalian matriks dengan skalar
void perkalianSkalar(int matriks[MAX_SIZE][MAX_SIZE], int baris, int kolom, int skalar)
{
    int hasil[MAX_SIZE][MAX_SIZE];
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            hasil[i][j] = matriks[i][j] * skalar;
        }
    }
    printf("Hasil Perkalian dengan Skalar:\n");
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk kombinasi linear matriks
void kombinasiLinear(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int baris, int kolom, int a, int b)
{
    int temp[MAX_SIZE][MAX_SIZE];
    perkalianSkalar(A, baris, kolom, a);
    int temp2[MAX_SIZE][MAX_SIZE];
    perkalianSkalar(B, baris, kolom, b);
    int hasil[MAX_SIZE][MAX_SIZE];
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            hasil[i][j] = temp[i][j] + temp2[i][j];
        }
    }
    printf("Hasil Kombinasi Linear:\n");
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk mentranspose matriks
void transposeMatriks(int matriks[MAX_SIZE][MAX_SIZE], int baris, int kolom)
{
    int hasil[MAX_SIZE][MAX_SIZE];
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            hasil[j][i] = matriks[i][j];
        }
    }
    printf("Hasil Transpose:\n");
    for (int i = 1; i <= kolom; i++)
    {
        for (int j = 1; j <= baris; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk menghitung trace matriks
void traceMatriks(int matriks[MAX_SIZE][MAX_SIZE], int ukuran)
{
    int trace = 0;
    for (int i = 1; i <= ukuran; i++)
    {
        trace += matriks[i][i];
    }
    printf("Trace Matriks: %d\n", trace);
}

// Fungsi untuk inisiasi matriks nol
void inisiasiMatriksNol(int matriks[MAX_SIZE][MAX_SIZE], int baris, int kolom)
{
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            matriks[i][j] = 0;
        }
    }
    printf("Matriks Nol:\n");
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

void inisiasiMatriksIdentitas(int matriks[MAX_SIZE][MAX_SIZE], int ukuran)
{
    for (int i = 1; i <= ukuran; i++)
    {
        for (int j = 1; j <= ukuran; j++)
        {
            matriks[i][j] = (i == j) ? 1 : 0;
        }
    }
    printf("Matriks Identitas:\n");
    for (int i = 1; i <= ukuran; i++)
    {
        for (int j = 1; j <= ukuran; j++)
        {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk menghitung invers matriks (Hanya untuk matriks 2x2)
void inversMatriks(int matriks[MAX_SIZE][MAX_SIZE], int ukuran)
{
    if (ukuran != 2)
    {
        printf("Hanya matriks 2x2 yang didukung untuk invers.\n");
        return;
    }
    int det = matriks[1][1] * matriks[2][2] - matriks[1][2] * matriks[2][1];
    if (det == 0)
    {
        printf("Matriks tidak dapat diinvers.\n");
        return;
    }
    float hasil[MAX_SIZE][MAX_SIZE];
    hasil[1][1] = matriks[2][2] / float(det);
    hasil[1][2] = -matriks[1][2] / float(det);
    hasil[2][1] = -matriks[2][1] / float(det);
    hasil[2][2] = matriks[1][1] / float(det);
    printf("Hasil Invers:\n");
    for (int i = 1; i <= ukuran; i++)
    {
        for (int j = 1; j <= ukuran; j++)
        {
            printf("%.2f ", hasil[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
    int baris, kolom, pilihan;

    printf("Masukkan ukuran matriks (Baris): ");
    scanf("%d", &baris);
    printf("Masukkan ukuran matriks (Kolom): ");
    scanf("%d", &kolom);

    // Inisiasi awal matriks A
    printf("Masukkan Matriks A:\n");
    inisiasiMatriks(A, baris, kolom);

    while (true)
    {
        printf("\nMenu Operasi Matriks:\n");
        printf("1. Inisiasi Ulang Matriks A\n");
        printf("2. Penjumlahan Matriks\n");
        printf("3. Pengurangan Matriks\n");
        printf("4. Perkalian Matriks\n");
        printf("5. Perkalian Matriks dengan Skalar\n");
        printf("6. Kombinasi Linear Matriks\n");
        printf("7. Transpose Matriks\n");
        printf("8. Trace Matriks\n");
        printf("9. Inisiasi Matriks Nol\n");
        printf("10. Inisiasi Matriks Identitas\n");
        printf("11. Invers Matriks (Hanya 2x2)\n");
        printf("0. Keluar\n");
        printf("Pilih operasi Matriks (1-11): ");
        scanf("%d", &pilihan);

        if (pilihan == 0)
        {
            break;
        }

        switch (pilihan)
        {
        case 1:
            inisiasiMatriks(A, baris, kolom);
            break;
        case 2:
            printf("Masukkan Matriks B:\n");
            inisiasiMatriks(B, baris, kolom);
            penjumlahanMatriks(A, B, baris, kolom);
            break;
        case 3:
            printf("Masukkan Matriks B:\n");
            inisiasiMatriks(B, baris, kolom);
            penguranganMatriks(A, B, baris, kolom);
            break;
        case 4:
            printf("Masukkan Matriks B:\n");
            inisiasiMatriks(B, baris, kolom);
            perkalianMatriks(A, B, baris, kolom, kolom);
            break;
        case 5:
        {
            int skalar;
            printf("Masukkan nilai skalar: ");
            scanf("%d", &skalar);
            perkalianSkalar(A, baris, kolom, skalar);
            break;
        }
        case 6:
        {
            int a, b;
            printf("Masukkan nilai skalar a: ");
            scanf("%d", &a);
            printf("Masukkan nilai skalar b: ");
            scanf("%d", &b);
            printf("Masukkan Matriks B:\n");
            inisiasiMatriks(B, baris, kolom);
            kombinasiLinear(A, B, baris, kolom, a, b);
            break;
        }
        case 7:
            transposeMatriks(A, baris, kolom);
            break;
        case 8:
            traceMatriks(A, baris);
            break;
        case 9:
            inisiasiMatriksNol(A, baris, kolom);
            break;
        case 10:
            inisiasiMatriksIdentitas(A, baris);
            break;
        case 11:
            inversMatriks(A, baris);
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
        }
    }

    return 0;
}