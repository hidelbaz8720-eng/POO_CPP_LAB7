# TP 7 : Surcharge de méthodes et constructeurs en C++

##  Module
Programmation Orientée Objet (POO) – C++

##  Objectif du TP
Ce TP a pour objectif de comprendre et de pratiquer la surcharge des constructeurs et des méthodes en C++. Il permet de créer plusieurs versions d'un constructeur ou d'une méthode avec des paramètres différents afin d'adapter le comportement des classes selon les besoins.

##  Exercices réalisés

### 1. Gestion d'un carnet d'adresses
Création d'une classe `Contact` avec trois constructeurs surchargés :
- Un constructeur avec le nom uniquement.
- Un constructeur avec le nom et le numéro de téléphone.
- Un constructeur avec le nom, le téléphone et l'adresse email.

Une méthode `afficher()` permet d'afficher les informations de chaque contact.

####  Capture d'écran – Exercice 1
<img width="1366" height="768" alt="ex1" src="https://github.com/user-attachments/assets/bdcbe84a-e7c1-4bd7-ba2f-a1f78d310bb7" />


### 2. Système de facturation
Création d'une classe `Facture` utilisant la surcharge de la méthode `ajouterArticle()` :
- Ajout d'un article avec son nom et son prix unitaire.
- Ajout d'un article avec son nom, son prix et sa quantité.
- Ajout d'un article avec son nom, son prix, sa quantité et le taux de TVA.

Utilisation de `std::vector` pour stocker dynamiquement les articles et d'une méthode `afficherTotal()` pour calculer et afficher le montant total de la facture.

####  Capture d'écran – Exercice 2
<img width="1366" height="768" alt="ex2" src="https://github.com/user-attachments/assets/0738ccb9-5aff-493e-8966-a42d19e72565" />


### 3. Banque – Constructeurs surchargés et logique métier
Création d'une classe `CompteBancaire` comprenant :
- Un constructeur sans solde initial.
- Un constructeur avec un solde initial.
- Une méthode `afficherSolde()` pour afficher le solde du compte.
- Une méthode `retrait()` surchargée avec et sans code de sécurité.

Ajout de vérifications pour gérer les montants invalides, les soldes insuffisants et les codes de sécurité incorrects.

####  Capture d'écran – Exercice 3
<img width="1366" height="768" alt="ex3" src="https://github.com/user-attachments/assets/5e495702-9324-48bf-9ee0-b5de2e0cc479" />


##  Technologies utilisées
- Langage : C++
- Programmation Orientée Objet
- Constructeurs surchargés
- Surcharge de méthodes
- `std::vector`
- Encapsulation et logique métier

## Compétences acquises
- Comprendre la surcharge des constructeurs.
- Maîtriser la surcharge des méthodes.
- Manipuler les classes et les objets en C++.
- Utiliser les tableaux dynamiques avec `std::vector`.
- Implémenter des contrôles et des validations dans les méthodes.

##  Auteur
**Hamza ID EL BAZ**
