#include <stdio.h>

struct Etudiant {
    int CNE;
    char nom[50];
    char prenom[50];
    char sexe[10];
    char tel[20];
    char email[50];
    char adresse[100];
    int anneeBac;
    char classe[100];
    float notes[5];
};

int nombreEtudiants = 0;
struct Etudiant etudiants[100];

void ajouterEtudiant() {
    printf("Ajout d'un etudiant\n");
    printf("CNE : ");
    scanf("%d", &etudiants[nombreEtudiants].CNE);

    printf("Nom : ");
    scanf("%s", etudiants[nombreEtudiants].nom);

    printf("Prenom : ");
    scanf("%s", etudiants[nombreEtudiants].prenom);

    printf("Sexe : ");
    scanf("%s", etudiants[nombreEtudiants].sexe);

    printf("Telephone : ");
    scanf("%s", etudiants[nombreEtudiants].tel);

    printf("Email : ");
    scanf("%s", etudiants[nombreEtudiants].email);

    printf("Adresse : ");
    scanf("%s", etudiants[nombreEtudiants].adresse);

    printf("Annee d'obtention du bac : ");
    scanf("%d", &etudiants[nombreEtudiants].anneeBac);

    printf("Classe (filiere) : ");
    scanf("%s", etudiants[nombreEtudiants].classe);

    nombreEtudiants++;

    printf("Etudiant ajoute avec succes.\n");
}

void rechercherEtudiant() {
    int cne;

    printf("Recherche d'un etudiant\n");
    printf("CNE de l'etudiant : ");
    scanf("%d", &cne);

    int i;
    for (i = 0; i < nombreEtudiants; i++) {
        if (etudiants[i].CNE == cne) {
            printf("Etudiant trouve :\n");
            printf("CNE : %d\n", etudiants[i].CNE);
            printf("Nom : %s\n", etudiants[i].nom);
            printf("Prenom : %s\n", etudiants[i].prenom);
            printf("Sexe : %s\n", etudiants[i].sexe);
            printf("Telephone : %s\n", etudiants[i].tel);
            printf("Email : %s\n", etudiants[i].email);
            printf("Adresse : %s\n", etudiants[i].adresse);
            printf("Annee d'obtention du bac : %d\n", etudiants[i].anneeBac);
            printf("Classe (filiere) : %s\n", etudiants[i].classe);

        }
    }

    if (i == nombreEtudiants) {
        printf("Etudiant non trouve.\n");
    }
}

void modifierDossierEtudiant() {
    int cne;

    printf("Modification du dossier d'un etudiant\n");
    printf("CNE de l'etudiant : ");
    scanf("%d", &cne);

    int i;
    for (i = 0; i < nombreEtudiants; i++) {
        if (etudiants[i].CNE == cne) {
            printf("Nouveau nom : ");

            scanf("%s", etudiants[i].nom);

            printf("Nouveau prenom : ");
            scanf("%s", etudiants[i].prenom);

            printf("Nouveau sexe : ");
            scanf("%s", etudiants[i].sexe);

            printf("Nouveau telephone : ");
            scanf("%s", etudiants[i].tel);

            printf("Nouvel email : ");
            scanf("%s", etudiants[i].email);

            printf("Nouvelle adresse : ");
            scanf("%s", etudiants[i].adresse);

            printf("Nouvelle annee d'obtention du bac : ");
            scanf("%d", &etudiants[i].anneeBac);

            printf("Nouvelle classe (filiere) : ");
            scanf("%s", etudiants[i].classe);

            printf("Dossier d'etudiant modifie avec succes.\n");

        }
    }

    if (i == nombreEtudiants) {
        printf("Etudiant non trouve.\n");
    }
}

void supprimerDossierEtudiant() {
    int cne;

    printf("Suppression du dossier d'un etudiant\n");
    printf("CNE de l'etudiant : ");
    scanf("%d", &cne);

    int i;
    for (i = 0; i < nombreEtudiants; i++) {
        if (etudiants[i].CNE == cne) {
            for (int j = i; j < nombreEtudiants - 1; j++) {
                etudiants[j] = etudiants[j + 1];
            }

            nombreEtudiants--;

            printf("Dossier d'etudiant supprime avec succes.\n");

        }
    }

    if (i == nombreEtudiants) {
        printf("Etudiant non trouve.\n");
    }
}

void changerMotDePasse() {
    int cne;
    char nouveauMotDePasse[20];

    printf("Changement du mot de passe d'un etudiant\n");
    printf("CNE de l'etudiant : ");
    scanf("%d", &cne);

    int i;
    for (i = 0; i < nombreEtudiants; i++) {
        if (etudiants[i].CNE == cne) {
            printf("Nouveau mot de passe : ");
            scanf("%s", nouveauMotDePasse);

            printf("Mot de passe change avec succes.\n");

        }
    }

    if (i == nombreEtudiants) {
        printf("Etudiant non trouve.\n");
    }
}

void saisirNotes() {
    int cne;

    printf("Saisie des notes\n");
    printf("CNE de l'etudiant : ");
    scanf("%d", &cne);

    int i;
    for (i = 0; i < nombreEtudiants; i++) {
        if (etudiants[i].CNE == cne) {
            for (int j = 0; j < 13; j++) {

                do{
                printf("Note %d : ", j + 1);
                scanf("%f", &etudiants[i].notes[j]);
                if(etudiants[i].notes[j]>20 || etudiants[i].notes[j]<0){
                    printf("note invalide!!\n");
                }
                }while(etudiants[i].notes[j]>20 || etudiants[i].notes[j]<0);
            }

            printf("Notes saisies avec succes.\n");

        }
    }

    if (i == nombreEtudiants) {
        printf("Etudiant non trouve.\n");
    }
}

void modifierNote() {
    int cne;
    int numeroNote;
    float nouvelleNote;

    printf("Modification d'une note\n");
    printf("CNE de l'etudiant : ");
    scanf("%d", &cne);

    printf("Numero de la note : ");
    scanf("%d", &numeroNote);

    printf("Nouvelle note : ");
    scanf("%f", &nouvelleNote);

    int i;
    for (i = 0; i < nombreEtudiants; i++) {
        if (etudiants[i].CNE == cne) {
            if (numeroNote >= 1 && numeroNote <= 5) {
                etudiants[i].notes[numeroNote - 1] = nouvelleNote;
                printf("Note modifiee avec succes.\n");
            } else {
                printf("Numero de note invalide.\n");
            }

        }
    }

    if (i == nombreEtudiants) {
        printf("Etudiant non trouve.\n");
    }
}

void calculerMoyenneEtudiant() {
    int cne;

    printf("Calcul de la moyenne d'un etudiant\n");
    printf("CNE de l'etudiant : ");
    scanf("%d", &cne);

    int i;
    for (i = 0; i < nombreEtudiants; i++) {
        if (etudiants[i].CNE == cne) {
            float somme = 0;
            for (int j = 0; j < 5; j++) {
                somme += etudiants[i].notes[j];
            }

            float moyenne = somme / 5;
            printf("Moyenne de l'etudiant : %.2f\n", moyenne);

        }
    }

    if (i == nombreEtudiants) {
        printf("Etudiant non trouve.\n");
    }
}

void afficherToutesMoyennes() {
    printf("Affichage de toutes les moyennes\n");

    for (int i = 0; i < nombreEtudiants; i++) {
        float somme = 0;
        for (int j = 0; j < 5; j++) {
            somme += etudiants[i].notes[j];
        }

        float moyenne = somme / 5;
        printf("Moyenne de l'etudiant %d (%s %s) : %.2f\n", etudiants[i].CNE, etudiants[i].nom, etudiants[i].prenom, moyenne);
    }
}

int main() {
    int choix;

    do {
        printf("\n");
        printf("GESTION Des etudiants\n");
        printf("1. Ajouter un etudiant\n");
        printf("2. Rechercher un etudiant\n");
        printf("3. Modifier le dossier d'un etudiant\n");
        printf("4. Supprimer le dossier d'un etudiant\n");
        printf("5. Changer le mot de passe d'un etudiant\n");
        printf("6. Passer vers la gestion des notes\n");
        printf("7. Quitter le programme\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterEtudiant();
                break;
            case 2:
                rechercherEtudiant();
                break;
            case 3:
                modifierDossierEtudiant();
                break;
            case 4:
                supprimerDossierEtudiant();
                break;
            case 5:
                changerMotDePasse();
                break;
            case 6:        do {
        printf("\n");
        printf("GESTION Des NOTES\n");
        printf("1. Saisir des notes\n");
        printf("2. Modifier une note\n");
        printf("3. Calculer les moyennes d'un etudiant\n");
        printf("4. Affichage de toutes les moyennes\n");
        printf("5. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                saisirNotes();
                break;
            case 2:
                modifierNote();
                break;
            case 3:
                calculerMoyenneEtudiant();
                break;
            case 4:
                afficherToutesMoyennes();
                break;
            case 5:


                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choix != 5);

                 break;
            case 7:

                printf("Au revoir.\n");
                exit(0);
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                break;
        }
    } while (1);


    return 0;
}
