
#include <iostream>
using namespace std;

class CompteBancaire {
private:
    double solde;
    int codeSecurite;

public:
    // Constructeur sans solde initial
    CompteBancaire() {
        solde = 0;
        codeSecurite = 1234;
    }

    // Constructeur avec solde initial
    CompteBancaire(double s) {
        solde = (s >= 0) ? s : 0;
        codeSecurite = 1234;
    }

    void afficherSolde() {
        cout << "Solde actuel : " << solde << " DH" << endl;
    }

    // Retrait sans code
    void retrait(double montant) {
        if (montant <= 0) {
            cout << "Montant invalide !" << endl;
        }
        else if (montant > solde) {
            cout << "Solde insuffisant !" << endl;
        }
        else {
            solde -= montant;
            cout << "Retrait effectue avec succes." << endl;
        }
    }

    // Retrait avec code de securite
    void retrait(double montant, int code) {
        if (code != codeSecurite) {
            cout << "Code de securite incorrect !" << endl;
        }
        else if (montant <= 0) {
            cout << "Montant invalide !" << endl;
        }
        else if (montant > solde) {
            cout << "Solde insuffisant !" << endl;
        }
        else {
            solde -= montant;
            cout << "Retrait securise effectue avec succes." << endl;
        }
    }
};

int main() {
    // Deux comptes
    CompteBancaire c1;
    CompteBancaire c2(5000);

    cout << "===== COMPTE 1 =====" << endl;
    c1.afficherSolde();

    cout << "\n===== COMPTE 2 =====" << endl;
    c2.afficherSolde();

    // Retrait simple
    c2.retrait(500);
    c2.afficherSolde();

    // Retrait avec code
    c2.retrait(1000, 1234);
    c2.afficherSolde();

    // Test avec mauvais code
    c2.retrait(500, 9999);
    c2.afficherSolde();

    return 0;
}
