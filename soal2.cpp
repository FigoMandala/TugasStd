#include "Kepala.h"

void Create_List(List &L) {
    L.first = nullptr;
}

adr New_Elemen(infotype data) {
    adr p = new elmList;
    p->info = data;
    p->next = nullptr;
    return p;
}

void Insert_First(List &L, adr p) {
    if (L.first == nullptr) {
        L.first = p;
    } else {
        p->next = L.first;
        L.first = p;
    }
}

void Insert_Last(List &L, adr p) {
    if (L.first == nullptr) {
        L.first = p;
    } else {
        adr q = L.first;
        while (q->next != nullptr) {
            q = q->next;
        }
        q->next = p;
    }
}

void Insert_After(List &L, adr prec, adr p) {
    if (prec != nullptr) {
        p->next = prec->next;
        prec->next = p;
    }
}

void Delete_First(List &L, adr &p) {
    if (L.first == nullptr) {
        p = nullptr;
    } else {
        p = L.first;
        L.first = p->next;
        p->next = nullptr;
    }
}

void Delete_Last(List &L, adr &p) {
    if (L.first == nullptr) {
        p = nullptr;
    } else {
        adr q = L.first;
        if (q->next == nullptr) {
            p = q;
            L.first = nullptr;
        } else {
            while (q->next->next != nullptr) {
                q = q->next;
            }
            p = q->next;
            q->next = nullptr;
        }
    }
}

void Delete_After(List &L, adr prec, adr &p) {
    if (prec->next != nullptr) {
        p = prec->next;
        prec->next = p->next;
        p->next = nullptr;
    }
}

void Show(const List &L) {
    if (L.first == nullptr) {
        cout << "Yah Kosong" << endl;
    } else {
        adr p = L.first;
        while (p != nullptr) {
            cout << "Instansi: " << p->info.instansi
                 << ", Pegawai: " << p->info.pegawai
                 << ", NIP: " << p->info.nip << endl;
            p = p->next;
        }
    }
}

void SortByNip(List &L) {
    if (L.first == nullptr || L.first->next == nullptr) return;

    List sortedList;
    Create_List(sortedList);
    adr current = L.first;

    while (current != nullptr) {
        adr next = current->next;
        if (sortedList.first == nullptr || sortedList.first->info.nip > current->info.nip) {
            current->next = sortedList.first;
            sortedList.first = current;
        } else {
            adr searchNode = sortedList.first;
            while (searchNode->next != nullptr && searchNode->next->info.nip < current->info.nip) {
                searchNode = searchNode->next;
            }
            current->next = searchNode->next;
            searchNode->next = current;
        }
        current = next;
    }
    L.first = sortedList.first;
}

adr SearchByNip(const List &L, int nip) {
    adr p = L.first;
    while (p != nullptr) {
        if (p->info.nip == nip) {
            return p;
        }
        p = p->next;
    }
    return nullptr;
}
