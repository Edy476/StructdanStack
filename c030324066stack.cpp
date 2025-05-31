#include <iostream>
using namespace std;

// Definisi tipe data item pada stack
typedef int ItemType;

// Ukuran maksimum stack
#define MAXSTACK 100

// Definisi struktur stack
typedef struct {
    ItemType Item[MAXSTACK];
    int Count;
} Stack;

// Inisialisasi stack kosong
void InitializeStack(Stack *S) {
    S->Count = 0;
}

// Mengecek apakah stack kosong
int Empty(Stack *S) {
    return (S->Count == 0);
}

// Mengecek apakah stack penuh
int Full(Stack *S) {
    return (S->Count == MAXSTACK);
}
