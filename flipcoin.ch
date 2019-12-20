/*File: flipcoin.ch
simulates the flipping of a coin 100,000 times
Prints the simulation results and probabilities for both head and tail.*/

//declare
int h, t, flip, hfr, tfr, sim;
double hp, tp, endProbH, endProbT;

//simulation
while(sim != 100000){
    //initialize
    h = 1;
    t = 2;
    
    flip = randint(1, 2);
    
    //frequency
    if(flip == h){
        hfr++;
    }else{
        tfr++;
    }
    
    //next flip
    sim++;
}

//calculations
hp = hfr * .00001;
tp = tfr * .00001;
endProbH = hp*100;
endProbT = tp*100;

//output
printf("\nCoin Face   Frequency   Probability\n");
printf("Head        %d          %.2lf\n", hfr, endProbH);
printf("Tails       %d          %.2lf\n\n", tfr, endProbT);
