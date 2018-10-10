class HelperClass{

public:

HelperClass();

int Binning2016(double mT, double MET, double Mll );

int Binning2016Mll(double mT, double MET, double Mll );

int Binning2016Mllv2(double mT, double MET, double Mll );



};

HelperClass::HelperClass(){}


int HelperClass::Binning2016(double mT, double MET, double Mll){

if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll<75.)     return 1;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll<75.)    return 2;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll<75.)    return 3;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll<75.)    return 4;
if(mT >0.0 && mT < 100. && MET >= 250. && Mll<75.)                 return 5;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll<75.)  return 6;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll<75.) return 7;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll<75.) return 8;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll<75.)              return 9;
if(mT >=160.0 && MET >= 50. && MET <100. && Mll<75.)               return 10;
if(mT >=160.0 && MET >= 100. && MET <150. && Mll<75.)              return 11;
if(mT >=160.0 && MET >= 150. && MET <200. && Mll<75.)              return 12;
if(mT >=160.0 && MET >= 200. && MET <250. && Mll<75.)              return 13;
if(mT >=160.0 && MET >= 250. && Mll<75.)                           return 14;

if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll>=75.  && Mll< 105.)  return 15;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll>=75. && Mll< 105.)  return 16;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll>=75. && Mll< 105.)  return 17;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll>=75. && Mll< 105.)  return 18;
if(mT >0.0 && mT < 100. && MET >= 250. && MET <400. && Mll>=75. && Mll< 105.)  return 19;
if(mT >0.0 && mT < 100. && MET >= 400. && MET <550. && Mll>=75. && Mll< 105.)  return 20;
if(mT >0.0 && mT < 100. && MET >= 550. && Mll>=75. && Mll< 105.)               return 21;

if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll>=75.  && Mll< 105.)  return 22;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll>=75. && Mll< 105.)  return 23;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll>=75. && Mll< 105.)  return 24;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll>=75. && Mll< 105.)               return 25;

if(mT >=160.0  && MET >= 50. && MET <100. && Mll>=75.  && Mll< 105.)  return 26;
if(mT >=160.0  && MET >= 100. && MET <150. && Mll>=75. && Mll< 105.)  return 27;
if(mT >=160.0  && MET >= 150. && MET <200. && Mll>=75. && Mll< 105.)  return 28;
if(mT >=160.0  && MET >= 200. && MET <250. && Mll>=75. && Mll< 105.)  return 29;
if(mT >=160.0  && MET >= 250. && MET <400. && Mll>=75. && Mll< 105.)  return 30;
if(mT >=160.0  && MET >= 400. && Mll>=75. && Mll< 105.)  return 31;

if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll>=105.)     return 32;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll>=105.)    return 33;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll>=105.)    return 34;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll>=105.)    return 35;
if(mT >0.0 && mT < 100. && MET >= 250. && Mll>=105.)    return 36;

if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll>=105.)     return 37;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll>=105.)    return 38;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll>=105.)    return 39;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll>=105.)    return 40;

if(mT >=160.0 &&  MET >= 50. && MET <100. && Mll>=105.)     return 41;
if(mT >=160.0 &&  MET >= 100. && MET <150. && Mll>=105.)    return 42;
if(mT >=160.0 &&  MET >= 150. && MET <200. && Mll>=105.)    return 43;
if(mT >=160.0 &&  MET >= 200. && Mll>=105.)    return 44;

return -10;

}


int HelperClass::Binning2016Mll(double mT, double MET, double Mll){

if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll<38.)     return 1;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll<38.)    return 2;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll<38.)    return 3;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll<38.)    return 4;
if(mT >0.0 && mT < 100. && MET >= 250. && Mll<38.)                 return 5;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll<38.)  return 6;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll<38.) return 7;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll<38.) return 8;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll<38.)              return 9;
if(mT >=160.0 && MET >= 50. && MET <100. && Mll<38.)               return 10;
if(mT >=160.0 && MET >= 100. && MET <150. && Mll<38.)              return 11;
if(mT >=160.0 && MET >= 150. && MET <200. && Mll<38.)              return 12;
if(mT >=160.0 && MET >= 200. && MET <250. && Mll<38.)              return 13;
if(mT >=160.0 && MET >= 250. && Mll<38.)                           return 14;

if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll >=38 && Mll<75.)     return 15;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll >=38 && Mll<75.)    return 16;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll >=38 && Mll<75.)    return 17;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll >=38 && Mll<75.)    return 18;
if(mT >0.0 && mT < 100. && MET >= 250. && Mll >=38 && Mll<75.)                 return 19;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll >=38 && Mll<75.)  return 20;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll >=38 && Mll<75.) return 21;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll >=38 && Mll<75.) return 22;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll >=38 && Mll<75.)              return 23;
if(mT >=160.0 && MET >= 50. && MET <100. && Mll >=38 && Mll<75.)               return 24;
if(mT >=160.0 && MET >= 100. && MET <150. && Mll >=38 && Mll<75.)              return 25;
if(mT >=160.0 && MET >= 150. && MET <200. && Mll >=38 && Mll<75.)              return 26;
if(mT >=160.0 && MET >= 200. && MET <250. && Mll >=38 && Mll<75.)              return 27;
if(mT >=160.0 && MET >= 250. && Mll >=38 && Mll<75.)                           return 28;


if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll>=75.  && Mll< 85.)  return 29;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll>=75. && Mll< 85.)  return 30;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll>=75. && Mll< 85.)  return 31;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll>=75. && Mll< 85.)  return 32;
if(mT >0.0 && mT < 100. && MET >= 250. && MET <400. && Mll>=75. && Mll< 85.)  return 33;
if(mT >0.0 && mT < 100. && MET >= 400. && MET <550. && Mll>=75. && Mll< 85.)  return 34;
if(mT >0.0 && mT < 100. && MET >= 550. && Mll>=75. && Mll< 85.)               return 35;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll>=75.  && Mll< 85.)  return 36;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll>=75. && Mll< 85.)  return 37;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll>=75. && Mll< 85.)  return 38;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll>=75. && Mll< 85.)               return 39;
if(mT >=160.0  && MET >= 50. && MET <100. && Mll>=75.  && Mll< 85.)  return 40;
if(mT >=160.0  && MET >= 100. && MET <150. && Mll>=75. && Mll< 85.)  return 41;
if(mT >=160.0  && MET >= 150. && MET <200. && Mll>=75. && Mll< 85.)  return 42;
if(mT >=160.0  && MET >= 200. && MET <250. && Mll>=75. && Mll< 85.)  return 43;
if(mT >=160.0  && MET >= 250. && MET <400. && Mll>=75. && Mll< 85.)  return 44;
if(mT >=160.0  && MET >= 400. && Mll>=75. && Mll< 85.)  return 45;


if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll>=85.  && Mll< 105.)  return 46;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll>=85. && Mll< 105.)  return 47;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll>=85. && Mll< 105.)  return 48;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll>=85. && Mll< 105.)  return 49;
if(mT >0.0 && mT < 100. && MET >= 250. && MET <400. && Mll>=85. && Mll< 105.)  return 50;
if(mT >0.0 && mT < 100. && MET >= 400. && MET <550. && Mll>=85. && Mll< 105.)  return 51;
if(mT >0.0 && mT < 100. && MET >= 550. && Mll>=85. && Mll< 105.)               return 52;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll>=85.  && Mll< 105.)  return 53;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll>=85. && Mll< 105.)  return 54;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll>=85. && Mll< 105.)  return 55;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll>=85. && Mll< 105.)               return 56;
if(mT >=160.0  && MET >= 50. && MET <100. && Mll>=85.  && Mll< 105.)  return 57;
if(mT >=160.0  && MET >= 100. && MET <150. && Mll>=85. && Mll< 105.)  return 58;
if(mT >=160.0  && MET >= 150. && MET <200. && Mll>=85. && Mll< 105.)  return 59;
if(mT >=160.0  && MET >= 200. && MET <250. && Mll>=85. && Mll< 105.)  return 60;
if(mT >=160.0  && MET >= 250. && MET <400. && Mll>=85. && Mll< 105.)  return 61;
if(mT >=160.0  && MET >= 400. && Mll>=85. && Mll< 105.)  return 62;

if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll>=105.)     return 63;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll>=105.)    return 64;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll>=105.)    return 65;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll>=105.)    return 66;
if(mT >0.0 && mT < 100. && MET >= 250. && Mll>=105.)    return 67;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll>=105.)     return 68;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll>=105.)    return 69;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll>=105.)    return 70;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll>=105.)    return 71;
if(mT >=160.0 &&  MET >= 50. && MET <100. && Mll>=105.)     return 72;
if(mT >=160.0 &&  MET >= 100. && MET <150. && Mll>=105.)    return 73;
if(mT >=160.0 &&  MET >= 150. && MET <200. && Mll>=105.)    return 74;
if(mT >=160.0 &&  MET >= 200. && Mll>=105.)    return 75;


return -10;

}


int HelperClass::Binning2016Mllv2(double mT, double MET, double Mll){


if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll<30.)     return 1;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll<30.)    return 2;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll<30.)    return 3;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll<30.)    return 4;
if(mT >0.0 && mT < 100. && MET >= 250. && Mll<30.)                 return 5;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll<30.)  return 6;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll<30.) return 7;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll<30.) return 8;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll<30.)              return 9;
if(mT >=160.0 && MET >= 50. && MET <100. && Mll<30.)               return 10;
if(mT >=160.0 && MET >= 100. && MET <150. && Mll<30.)              return 11;
if(mT >=160.0 && MET >= 150. && MET <200. && Mll<30.)              return 12;
if(mT >=160.0 && MET >= 200. && MET <250. && Mll<30.)              return 13;
if(mT >=160.0 && MET >= 250. && Mll<30.)                           return 14;

if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll >=30 && Mll<60.)     return 15;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll >=30 && Mll<60.)    return 16;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll >=30 && Mll<60.)    return 17;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll >=30 && Mll<60.)    return 18;
if(mT >0.0 && mT < 100. && MET >= 250. && Mll >=30 && Mll<60.)                 return 19;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll >=30 && Mll<60.)  return 20;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll >=30 && Mll<60.) return 21;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll >=30 && Mll<60.) return 22;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll >=30 && Mll<60.)              return 23;
if(mT >=160.0 && MET >= 50. && MET <100. && Mll >=30 && Mll<60.)               return 24;
if(mT >=160.0 && MET >= 100. && MET <150. && Mll >=30 && Mll<60.)              return 25;
if(mT >=160.0 && MET >= 150. && MET <200. && Mll >=30 && Mll<60.)              return 26;
if(mT >=160.0 && MET >= 200. && MET <250. && Mll >=30 && Mll<60.)              return 27;
if(mT >=160.0 && MET >= 250. && Mll >=30 && Mll<60.)                           return 28;


if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll>=60.  && Mll< 80.)  return 29;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll>=60. && Mll< 80.)  return 30;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll>=60. && Mll< 80.)  return 31;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll>=60. && Mll< 80.)  return 32;
if(mT >0.0 && mT < 100. && MET >= 250. && MET <400. && Mll>=60. && Mll< 80.)  return 33;
if(mT >0.0 && mT < 100. && MET >= 400. && MET <550. && Mll>=60. && Mll< 80.)  return 34;
if(mT >0.0 && mT < 100. && MET >= 550. && Mll>=60. && Mll< 80.)               return 35;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll>=60.  && Mll< 80.)  return 36;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll>=60. && Mll< 80.)  return 37;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll>=60. && Mll< 80.)  return 38;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll>=60. && Mll< 80.)               return 39;
if(mT >=160.0  && MET >= 50. && MET <100. && Mll>=60.  && Mll< 80.)  return 40;
if(mT >=160.0  && MET >= 100. && MET <150. && Mll>=60. && Mll< 80.)  return 41;
if(mT >=160.0  && MET >= 150. && MET <200. && Mll>=60. && Mll< 80.)  return 42;
if(mT >=160.0  && MET >= 200. && MET <250. && Mll>=60. && Mll< 80.)  return 43;
if(mT >=160.0  && MET >= 250. && MET <400. && Mll>=60. && Mll< 80.)  return 44;
if(mT >=160.0  && MET >= 400. && Mll>=60. && Mll< 80.)  return 45;


if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll>=80.  && Mll< 100.)  return 46;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll>=80. && Mll< 100.)  return 47;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll>=80. && Mll< 100.)  return 48;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll>=80. && Mll< 100.)  return 49;
if(mT >0.0 && mT < 100. && MET >= 250. && MET <400. && Mll>=80. && Mll< 100.)  return 50;
if(mT >0.0 && mT < 100. && MET >= 400. && MET <550. && Mll>=80. && Mll< 100.)  return 51;
if(mT >0.0 && mT < 100. && MET >= 550. && Mll>=80. && Mll< 100.)               return 52;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll>=80.  && Mll< 100.)  return 53;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll>=80. && Mll< 100.)  return 54;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll>=80. && Mll< 100.)  return 55;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll>=80. && Mll< 100.)               return 56;
if(mT >=160.0  && MET >= 50. && MET <100. && Mll>=80.  && Mll< 100.)  return 57;
if(mT >=160.0  && MET >= 100. && MET <150. && Mll>=80. && Mll< 100.)  return 58;
if(mT >=160.0  && MET >= 150. && MET <200. && Mll>=80. && Mll< 100.)  return 59;
if(mT >=160.0  && MET >= 200. && MET <250. && Mll>=80. && Mll< 100.)  return 60;
if(mT >=160.0  && MET >= 250. && MET <400. && Mll>=80. && Mll< 100.)  return 61;
if(mT >=160.0  && MET >= 400. && Mll>=80. && Mll< 100.)  return 62;

if(mT >0.0 && mT < 100. && MET >= 50. && MET <100. && Mll>=100.)     return 63;
if(mT >0.0 && mT < 100. && MET >= 100. && MET <150. && Mll>=100.)    return 64;
if(mT >0.0 && mT < 100. && MET >= 150. && MET <200. && Mll>=100.)    return 65;
if(mT >0.0 && mT < 100. && MET >= 200. && MET <250. && Mll>=100.)    return 66;
if(mT >0.0 && mT < 100. && MET >= 250. && Mll>=100.)    return 67;
if(mT >=100.0 && mT < 160. && MET >= 50. && MET <100. && Mll>=100.)     return 68;
if(mT >=100.0 && mT < 160. && MET >= 100. && MET <150. && Mll>=100.)    return 69;
if(mT >=100.0 && mT < 160. && MET >= 150. && MET <200. && Mll>=100.)    return 70;
if(mT >=100.0 && mT < 160. && MET >= 200. && Mll>=100.)    return 71;
if(mT >=160.0 &&  MET >= 50. && MET <100. && Mll>=100.)     return 72;
if(mT >=160.0 &&  MET >= 100. && MET <150. && Mll>=100.)    return 73;
if(mT >=160.0 &&  MET >= 150. && MET <200. && Mll>=100.)    return 74;
if(mT >=160.0 &&  MET >= 200. && Mll>=100.)    return 75;


return -10;

}








