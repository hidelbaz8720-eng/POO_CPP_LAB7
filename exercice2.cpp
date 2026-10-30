
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Facture {
private:
    struct Article {
        string nom;
        double prix;
        int quantite;
        double tva;
    };

    vector<Article> articles;

public:
    // Version 1 : nom et prix
    void ajouterArticle(string nom, double prix) {
        articles.push_back({nom, prix, 1, 0});
    }

    // Version 2 : nom, prix et quantite
    void ajouterArticle(string nom, double prix, int quantite) {
        articles.push_back({nom, prix, quantite, 0});
    }

    // Version 3 : nom, prix, quantite et TVA
    void ajouterArticle(string nom, double prix,
                        int quantite, double tva) {
        articles.push_back({nom, prix, quantite, tva});
    }

    void afficherTotal() {
        double total = 0;

        cout << "===== FACTURE =====" << endl;

        for (Article a : articles) {
            double sousTotal = a.prix * a.quantite;
            double montantTVA = sousTotal * a.tva / 100;

            double montantFinal = sousTotal + montantTVA;

            cout << a.nom
                 << " | Prix : " << a.prix
                 << " | Quantite : " << a.quantite
                 << " | TVA : " << a.tva << "%"
                 << " | Total : " << montantFinal << endl;

            total += montantFinal;
        }

        cout << "-------------------" << endl;
        cout << "Total facture : " << total << " DH" << endl;
    }
};

int main() {
    Facture f;

    f.ajouterArticle("Stylo", 5);
    f.ajouterArticle("Cahier", 20, 3);
    f.ajouterArticle("Ordinateur", 5000, 2, 20);

    f.afficherTotal();

    return 0;
}
