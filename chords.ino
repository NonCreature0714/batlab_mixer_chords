/*
 */

int randFromList(int _array[], int _size) {
    return _array[random(0, _size - 1)];
}

int setA[]={1, 2, 3, 4, 5, 6};
int setB[]={4, 6};
int setC[]={3, 5};
int setD[]={0, 1, 4, 6};
int setE[]={0, 5};
int setF[]={3, 1};
int setG[]={4, 0};

int nextChord(int _lastChord) {
    switch (_lastChord) {
        case 0:
            return randFromList(setA, 6);
        case 1:
            return randFromList(setB, 2);
        case 2:
            return randFromList(setC, 2);
        case 3:
            return randFromList(setD, 4);
        case 4:
            return randFromList(setE, 2);
        case 5:
            return randFromList(setF, 2);
        case 6:
            return randFromList(setG, 2);
        default:
            Serial.println("There was an unknown error in 'nextChord' function.");
            return 0;
    }
}
