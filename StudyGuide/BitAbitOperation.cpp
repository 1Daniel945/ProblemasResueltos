/*
    fr(i, 1, n + 1){
        int a = i;
        int c = 0;
        while (a != 0) {
            //comparar a nivel de bit si es 1 y 1 aumento c
            c += a & 1;
            //Desplazamiento de bits a la derecha
            a >>= 1;
        }
        x.push_back(c);
    }
*/