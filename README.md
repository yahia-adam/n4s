Voici un README similaire pour le projet Need4Stek, basé sur les informations que vous avez fournies :

# Need4Stek

> Need4Stek : Simulez une voiture autonome avec V-REP et un programme C.

Ce projet développe un programme en C qui contrôle une voiture autonome dans un environnement de simulation V-REP. En utilisant des capteurs LIDAR simulés, le programme ajuste la vitesse et la direction de la voiture pour naviguer sur une piste. Cette simulation offre une expérience pratique de la programmation de véhicules autonomes, combinant des algorithmes de navigation de base avec une interface de simulation 3D.


Video Demo


[![Demo](https://img.youtube.com/vi/DImUoC9wzeo/0.jpg)](https://youtu.be/DImUoC9wzeo "Demo Video")


## Prérequis

- GCC (GNU Compiler Collection)
- Make
- V-REP (maintenant connu sous le nom de CoppeliaSim)
- Un système Linux

## Installation

### Cloner le dépôt

Commencez par cloner le dépôt sur votre machine locale :

```bash
git clone git@github.com:yahia-adam/n4s.git
cd n4s
```

### Compiler le programme

Utilisez le Makefile fourni pour compiler le programme :

```bash
make
```

Cela créera le binaire "ia".

## Configuration

Assurez-vous que V-REP est correctement installé sur votre système. Vous devrez peut-être ajuster les chemins dans le script `pipe.sh` pour qu'ils correspondent à votre installation de V-REP.

## Utilisation

### Lancer V-REP

Lancez V-REP en utilisant le script fourni :

```bash
./V-REP_PRO_EDU_V3_3_1_64_Linux/vrep.sh
```

Dans V-REP, ouvrez un fichier .ttt qui contient la scène de simulation.

### Exécuter la simulation

Pour exécuter le programme et le connecter à V-REP :

```bash
./pipe.sh
```

## Fonctionnement

1. Le programme C lit les données des capteurs LIDAR depuis V-REP.
2. En fonction de ces données, il calcule la vitesse et la direction appropriées.
3. Il envoie des commandes à V-REP pour contrôler la voiture.
4. Ce processus se répète en boucle jusqu'à ce que la piste soit terminée ou que la simulation soit arrêtée.

## Structure du projet

- `ia` : Le binaire principal
- `includes/` : Fichiers d'en-tête
- `src/` : Fichiers source C
- `Makefile` : Pour la compilation du projet
- `pipe.sh` : Script pour connecter le programme C à V-REP
- `vrep.sh` : Script pour lancer V-REP

## Dépannage

- Assurez-vous que V-REP est correctement installé et que les chemins dans `pipe.sh` sont corrects.
- Vérifiez que vous avez les permissions nécessaires pour exécuter les scripts et le binaire.
- Si la simulation ne démarre pas, vérifiez les logs de V-REP pour d'éventuelles erreurs.

## Contribution

Les contributions à ce projet sont les bienvenues. N'hésitez pas à ouvrir une issue ou à soumettre une pull request.

## Auteur

YAHIA ABDCHAFEE Adam
