#include<stdio.h>

void main() {
       
     int ii, ij;

     //for "I"

  for(ii = 1; ii <= 10; ii++){

    for(ij = 1; ij <= 10; ij++){
        if(ii == 1 || ii == 2 || ii == 9 || ii == 10 || ij == 4 || ij == 5 || ij == 6 || ij == 7) {
        printf("* ");
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n\n\n");

  //for "L"

      int li, lj;

  for(li = 1; li <= 10; li++){

    for(lj = 1; lj <= 20; lj++){
        if((li == 8 || li == 10 || li == 9 || lj == 10 || lj == 12 || lj == 13 || lj == 14 || lj == 11) && lj >= 10) {
        printf("* ");
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n");

  //for "O"

  int oi, oj;

  for(oi = 1; oi <= 10; oi++){

    for(oj = 1; oj <= 30; oj++){
        if((oi == 1 || oi == 2 || oi == 9 || oi == 10 || oj == 20 || oj == 21 || oj == 29 || oj == 30) && oj >= 20) {
        printf("* ");
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n");

  //for "V"

  int vi, vj, vx = 32, vx1 = 31, vy1 = 47, vy = 48;

  for(vi = 1; vi <= 8 ; vi++){

    for(vj = 0; vj <= 48; vj++){
        if((vj == vx || vj == vx1 || vj == vy || vj == vy1) && vj >= 30) {
            printf("* ");
            
        }
        else {
            printf("  ");
        }
    }
    printf("\n");
    vx++;
    vx1++;
    vy--;
    vy1--;
    sleep(1);
  }

  printf("\n");

  //for "E"

  int ei, ej;

  for(ei = 1; ei <= 10; ei++){

    for(ej = 1; ej <= 58; ej++){
        if((ei == 1 || ei == 2 || ei == 9 || ei == 10 || ei == 5 || ei == 6 || ej == 49 || ej == 50) && ej >= 49) {
        printf("* ");
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n\n\n");

  //for "U"

    int ui, uj, ux = 15, ux1 = 16, uy1 = 35, uy = 36;

  for(ui = 1; ui <= 10; ui++){

    for(uj = 1; uj <= 30; uj++){
        if(((uj == ux || uj == ux1 || uj == uy || uj == uy1) && ui > 6) || ((uj == 21 || uj == 22 || uj == 29 || uj == 30) && ui <= 6)) {
            printf("* ");
            
        }
        else {
            printf("  ");
        }
    }
    printf("\n");
    ux++;
    ux1++;
    uy--;
    uy1--;
    sleep(1);
  }

  printf("\n\n\n\n\n");

  //for "P"

   int pi, pj;

  for(pi = 1; pi <= 10; pi++){

    for(pj = 1; pj <= 30; pj++){
        if(((pi == 1 || pi == 2 || pi == 6 || pi == 7) && pj > 20) || pj == 21 || pj == 22 || ((pj == 29 || pj == 30) && pi < 7)) {
        printf("* ");
        
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n");

  //for "R"

int ri, rj, rx = 1;

  for(ri = 1; ri <= 10; ri++){

    for(rj = 1; rj <= 40; rj++){
        if(((ri == 1 || ri == 2 || ri == 6 || ri == 7) && rj > 30) || rj == 31 || rj == 32 || ((rj == 39 || rj == 40) && ri < 7) || ((ri + 30 == rj || (ri + 29) == (rj + 1)) && ri >= 6)) {
        printf("* ");
        
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n");

  //for "I"

int iii, iij;

  for(iii = 1; iii <= 10; iii++){

    for(iij = 1; iij <= 30; iij++){
        if(((iii == 1 || iii == 2 || iii == 9 || iii == 10) && iij > 20) || iij == 24 || iij == 25 || iij == 26 || iij == 27) {
        printf("* ");
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n");

  //for "O"

  int ooi, ooj;

  for(ooi = 1; ooi <= 10; ooi++){

    for(ooj = 1; ooj <= 20; ooj++){
        if(((ooi == 1 || ooi == 2 || ooi == 9 || ooi == 10) && ooj > 10) || ooj == 11 || ooj == 12 || ooj == 19 || ooj == 20) {
        printf("* ");
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n");

  //for "N"

  int ni, nj;

  for(ni = 1; ni <= 10; ni++){

    for(nj = 1; nj <= 30; nj++){
        if(ni + 20 == nj || (ni + 21) == (nj - 1) || (ni + 19) == (nj + 1) || nj == 19 || nj == 20 || nj == 29 || nj == 30) {
        printf("* ");
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n");

  //for "T"

  int ti, tj;

  for(ti = 1; ti <= 10; ti++){

    for(tj = 1; tj <= 40; tj++){
        if(((ti == 1 || ti == 2) && tj > 30) || tj == 34 || tj == 35 || tj == 36 || tj == 37) {
        printf("* ");
        
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n");

  //for "I"

  int i, j;

  for(i = 1; i <= 10; i++){

    for(j = 1; j <= 30; j++){
        if(((i == 1 || i == 2 || i == 9 || i == 10) && j > 20) || j == 24 || j == 25 || j == 26 || j == 27) {
        printf("* ");
        }
        else {
            printf("  ");
        }
    }
    
    printf("\n");
    sleep(1);

  }

  printf("\n  ========================  ========  ============  ====================  ======================  =================  ========================  ========================  ========  ============  ====================  ======================  =================  ========================  ========================  ========  ============  \n");
  sleep(1);
  printf("A ");
sleep(1);
  printf("L");
sleep(1);
  printf("i");
sleep(1);
  printf("t");
sleep(1);
  printf("t");
sleep(1);
  printf("l");
  sleep(1);
  printf("e");
sleep(1);
  printf(" G");
  sleep(1);
  printf("i");
  sleep(1);
  printf("f");
  sleep(1);
  printf("t");
  sleep(1);
  printf(" F");
  sleep(1);
  printf("o");
  sleep(1);
  printf("r");
  sleep(1);
  printf(" M");
  sleep(1);
  printf("y");
  sleep(1);
  printf(" V");
  sleep(1);
  printf("a");
  sleep(1);
  printf("l");
  sleep(1);
  printf("e");
  sleep(1);
  printf("n");
  sleep(1);
  printf("t");
  sleep(1);
  printf("i");
  sleep(1);
  printf("n");
  sleep(1);
  printf("e");
  sleep(1);
  printf(".");
  sleep(1);
  printf(".");
  sleep(1);
  printf(".");
sleep(1);
printf("%c\n\n\n\n", 1);


//for heart
    int hi, hj;

    for (hi = 0; hi < 3; hi++) {
        for (hj = 0; hj < 41; hj++) {
            if ((hj >= 22 - hi && hj <= 26 + hi) || (hj >= 34 - hi && hj <= 38 + hi))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        sleep(1);
    }

    for(hi = 2; hi < 13; hi++) {
        for(hj = 0; hj < 41; hj++) {
            if(hj >= hi + 18 && hj <= 42 - hi)
               printf("*");
            else
               printf(" ");
        }
        printf("\n");
        sleep(1);
    }

       
}