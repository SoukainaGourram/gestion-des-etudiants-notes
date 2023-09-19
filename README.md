# gestion-des-etudiants-notes
Ce programme est une application de gestion d'étudiants écrite en langage C. Voici une explication de son fonctionnement :

1. **Définition de la structure `Etudiant` :** La structure `Etudiant` est définie pour stocker les informations relatives à un étudiant, notamment son CNE (Certificat National d'Études), son nom, prénom, sexe, numéro de téléphone, adresse e-mail, adresse, année d'obtention du baccalauréat, classe (filière), et un tableau pour stocker ses notes dans 5 matières.

2. **Initialisation des données :** Le programme initialise un tableau `etudiants` qui peut stocker jusqu'à 100 étudiants et une variable `nombreEtudiants` pour suivre le nombre actuel d'étudiants dans le système.

3. **Fonction `ajouterEtudiant` :** Cette fonction permet d'ajouter un nouvel étudiant au système. Elle demande à l'utilisateur de saisir les informations de l'étudiant, telles que le CNE, le nom, le prénom, etc., puis les stocke dans le tableau `etudiants`.

4. **Fonction `rechercherEtudiant` :** Cette fonction permet à l'utilisateur de rechercher un étudiant par son CNE. Si l'étudiant est trouvé, ses informations sont affichées à l'écran.

5. **Fonction `modifierDossierEtudiant` :** Cette fonction permet de modifier les informations d'un étudiant existant en demandant à l'utilisateur de saisir de nouvelles informations, telles que le nom, le prénom, etc., pour cet étudiant.

6. **Fonction `supprimerDossierEtudiant` :** Cette fonction permet de supprimer le dossier d'un étudiant en fonction de son CNE. L'étudiant est retiré du tableau `etudiants`, et le nombre d'étudiants est mis à jour.

7. **Fonction `changerMotDePasse` :** Cette fonction semble destinée à permettre le changement de mot de passe des étudiants, bien que la fonctionnalité ne soit pas entièrement implémentée dans le code.

8. **Fonction `saisirNotes` :** Cette fonction permet de saisir les notes d'un étudiant. Elle demande à l'utilisateur de saisir le CNE de l'étudiant, puis les notes dans 13 matières (bien que le tableau soit défini pour 5 notes seulement).

9. **Fonction `modifierNote` :** Cette fonction permet de modifier une note spécifique d'un étudiant en fonction de son CNE. L'utilisateur doit saisir le numéro de la note à modifier et la nouvelle note.

10. **Fonction `calculerMoyenneEtudiant` :** Cette fonction permet de calculer la moyenne d'un étudiant en fonction de son CNE. Elle calcule la moyenne des 5 notes de l'étudiant et l'affiche.

11. **Fonction `afficherToutesMoyennes` :** Cette fonction affiche les moyennes de tous les étudiants en parcourant le tableau `etudiants` et en calculant la moyenne de chaque étudiant.

12. **Fonction `main` :** La fonction principale (`main`) contient un menu qui permet à l'utilisateur de choisir parmi plusieurs options, telles que l'ajout d'un étudiant, la recherche, la modification, la suppression, la gestion des notes, et la sortie du programme. Le programme s'exécute en boucle jusqu'à ce que l'utilisateur choisisse de quitter.

    Veuillez noter que ce programme constitue une base de travail pour un système de gestion d'étudiants, mais il présente certaines limitations, notamment en ce qui concerne la gestion des mots de passe, la taille des tableaux (notamment le tableau des notes), et la gestion des erreurs. Il pourrait nécessiter des améliorations et des ajouts pour être plus robuste et fonctionnel dans un environnement réel.
