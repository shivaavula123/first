//Program for the unit conversion
#include<stdio.h>
int main(){
	int p,number;
	char continuechoice;
	char character;
	char y,n;
	int currencychoice;//selecting the currency choice
	int tempchoice;//selecting the Temperture choice
	int weightchoice;//selecting the Weight choice
	int areachoice;//selecting the Area choice
	int lengthchoice;//selecting the Length choice
	int speedchoice;//selecting the Speed choice
	int powerchoice;//selecting the Power choice
	float userinputc1,userinputc2,userinputc3,userinputc4,userinputc5,userinputc6,userinputc7,userinputc8;//USER INPUT OF CURRENCY
	float userinputF,userinputC;//USER INPUT OF TEMPERATURES
	float userinputk1,userinputk2,userinputk3,userinputk4,userinputk5,userinputk6,userinputk7,userinputk8,userinputk9,userinputk10,userinputk11,userinputk12;//USER INPUT FOR WEIGHT
	float userinputl1,userinputl2,userinputl3,userinputl4,userinputl5,userinputl6,userinputl7,userinputl8,userinputl9,userinputl10,userinputl11,userinputl12;//USER INPUT FOR LENGTHS
	float userinputs1,userinputs2,userinputs3,userinputs4,userinputs5;//USER INPUT FOR SPEED
	float userinputp1,userinputp2,userinputp3,userinputp4;//USER INPUT FOR POWER
	float userinputa1,userinputa2,userinputa3,userinputa4,userinputa5;//USER INPUT FOR AREA
	float INRtoUSD,INRtoCAD,INRtoJPY;// INDIA CURRENCY TO AMERICA CURRENCY,INDIA CURRENCY TO CANADA CURRENCY,INDIA CURRENCY TO JAPAN CURRENCY
	float USDtoINR,USDtoJPY;//  AMERICA CURRENCY TO  INDIA CURRENCY, AMERICA CURRENCY TO CANADA CURRENCY, AMERICA CURRENCY TO JAPAN CURRENCY
    float CADtoINR;//CANADA CURRENCY TO INDIA CURRENCY,CANADA CURRENCY TO AMERICA CURRENCY,CANADA CURRENCY TO JAPAN CURRENCY
    float JPYtoINR,JPYtoUSD;//JAPAN CURRNECY TO INDIA CURRENCY,JAPAN CURRNECY TO AMERICA CURRENCY,JAPAN CURRNECY TO  CANADA CURRNECY
    float FahrenhtoCel,CeltoFahrenh;//FAHRENHEIT TO CELSIUS && CELSICUS TO FAHRENHEIT
    float KGtoG,KGtoQ,KGtoT;//KILOGRAM TO GRAM,KILOGRAM TO QUINTAL,KILOGRAM TO TON
    float GtoKG,GtoQ,GtoT;//GRAM TO KILOGRAM ,GRAM TO QUINTAL,GRAM TO TON
    float QtoKG,QtoG,QtoT;//QUINTAL TO KILOGRAM ,QUINTAL TO GRAM ,QUINTAL TO TON
    float TtoKG,TtoG,TtoQ;//TON TO KILOGRAM,TON TO GRAM ,TON TO QUINTAL 
    float MtoMM,MtoCM,MtoKM;//METER TO MILLIMETER,METER TO CENTIMETER,METER TO KILOMETER
    float MMtoM,MMtoCM,MMtoKM;//MILLIMETER TO METER,MILLLIMETER TO CENTIMETER, MILLIMETER TO KILOMETER
    float CMtoM,CMtoKM,CMtoMM;//CENTIMETER TO METER,CENTIMETER TO KILOMETER,CENTIMETER TO MILLIMETER
    float KMtoCM,KMtoMM,KMtoM;//KILOMETER TO CENTIMETER,KILOMETER TO MILLIMETER,KILOMETER TO METER
    float mpstokps;//METER PER SECOND TO KILOMETER PER SECOND
    float mpstoinps;//METER PER SECOND TO INCH PER SECOND
    float kmpstokmph;//KILOMETER PER SECOND TO KILOMETER PER HOUR
    float kmpstomps;//KILOMETER PER SECOND TO METER PER SECOND
    float kmphtomph;//KILOMETER PER HOUR TO MILE PER HOUR
    float wtokw;//WATT TO KILOWATT
    float kwtow;//KILOWATT TO WATT
    float Nmpstow;//NEWTON-METER PER SECOND TO WATT
    float wtoNmps;//WATT TO NEWTON-METER PER SECOND
    float SMtoSCM;//SQUARE METER TO SQUARE CENTIMETER
    float SKMtoSM;//SQUARE KILOMETER TO SQUARE METER
    float SMtoSDM;//SQUARE METER TO SQUARE DECIMETER
    float SDMtoSM;//SQUARE DECIMETER TO SQUARE METER
    float SDMtoSKM;//SQUARE DECIMETER TO SQUARE KILOMETER
    printf("<>=============>>>>>>================>>>>>>>>>WELCOME TO UNIT CONVERTER<<<<<<<===========<<<<<<<<<<<=================<>");
    do
	{
	printf("\nHERE IS THE LIST OF UNIT CONVERTERS");
    printf("\nA.CURRENCY CONVERTER");
    printf("\nB.TEMPERATURE CONVERTER");
    printf("\nC.WEIGHT CONVERTER");
    printf("\nD.LENGTH CONVERTER");
    printf("\nE.SPEED CONVERTER");
    printf("\nF.POWER CONVERTER");
    printf("\nG.AREA CONVERTER");
    printf("\nENTER ANY CHARACTER FROM ABOVE LIST:");
    scanf(" %c",&character);
switch(character)
{
 case 'A':
		printf("______________WELCOME TO CURRENCY CONVERTER:______________");
		printf("\nHERE IS THE LIST OF CURRENCIES EXCHANGE:");
		printf("\n1.INDIA CURRENCY TO AMERICA CURRENCY");
		printf("\n2.AMERICA CURRENCY TO  INDIA CURRENCY");
		printf("\n3.INDIA CURRENCY TO JAPANESE YEN CURRENCY");
		printf("\n4.JAPANESE YEN CURRENCY TO INDIA CURRENCY");
		printf("\n5.INDIA CURRENCY TO CANADA CURRENCY");
		printf("\n6.CANADA CURRENCY TO INDIA CURRENCY");
	    printf("\n7.JAPANESE YEN CURRNECY TO AMERICA CURRENCY");
		printf("\n8.AMERICA CURRNECY TO JAPANESE YEN CURRENCY");
		printf("\nEnter any number from above list: ");
		scanf("%d",&currencychoice);
	    if(currencychoice==1){
		printf("PLEASE ENTER THE NO.OF RUPEES TO CONVERT INTO DOLLARS:");
		scanf("%f",&userinputc1);
		INRtoUSD=userinputc1/78.14;
		printf("INDIA CURRENCY TO AMERICA CURRENCY :%f",INRtoUSD);
		}
	    else if(currencychoice==2){
	    		printf("PLEASE ENTER THE NO.OF DOLLARS TO CONVERT INTO RUPEES:");
		        scanf("%f",&userinputc2);
		        USDtoINR=userinputc2*78.14;
		        printf("AMERICA CURRENCY TO INDIA CURRENCY :%f",USDtoINR);
		}
		else if(currencychoice==3){
			printf("PLEASE ENTER THE NO.OF RUPEES TO CONVERT INTO JAPANESE YEN CURRENCY:");
		        scanf("%f",&userinputc3);
			    INRtoJPY=userinputc3/1.72;
			    printf("INDIA CURRENCY TO JAPANESE YEN CURRENCY:%f",INRtoJPY);
		}
		else if(currencychoice==4){
			printf("PLEASE ENTER THE NO.OF JAPANESE CURRENCY TO CONVERT INTO INDIA CURRENCY:");
		        scanf("%f",&userinputc4);
			    JPYtoINR=userinputc4*1.72;
			    printf("JAPANESE CURRENCY TO INDIA CURRENCY:%f",JPYtoINR);
	}  
		else if(currencychoice==5){
			printf("PLEASE ENTER THE NO.OF INDIA CURRENCY TO CONVERT INTO CANADA CURRENCY:");
		        scanf("%f",&userinputc5);
			    INRtoCAD=userinputc5*0.0164;
			    printf("INDIA CURRENCY TO CANADA CURRENCY:%f",INRtoCAD);
}
	else if(currencychoice==6){
			printf("PLEASE ENTER THE NO.OF CANADA CURRENCY TO CONVERT INTO INDIA CURRENCY:");
		        scanf("%f",&userinputc6);
			    CADtoINR=userinputc6/0.0164;
			    printf("CANADA CURRENCY TO INDIA CURRENCY:%f",CADtoINR);
			}
				else if(currencychoice==7){
			printf("PLEASE ENTER THE NO.OF JAPANESE CURRENCY TO CONVERT INTO AMERICA CURRENCY:");
		        scanf("%f",&userinputc7);
			    JPYtoUSD=userinputc7*0.0074;
			    printf("JAPANESE CURRENCY TO AMERICA CURRENCY:%f",JPYtoUSD);
			}
				else if(currencychoice==8){
			printf("PLEASE ENTER THE NO.OF AMERICA CURRENCY TO CONVERT INTO JAPANESE YEN CURRENCY:");
		        scanf("%f",&userinputc8);
			    USDtoJPY=userinputc8/0.0074;
			    printf("AMERICA CURRENCY TO JAPANESE YEN CURRENCY:%f",USDtoJPY);
			}
			    break;
	  case 'B':
		printf("__________________WELCOME TO TEMPERATURE CONVERTER_______________");
		printf("\nHERE IS THE LIST TEMPERATURE");
		printf("\n1.FAHRENHEIT TO CELSIUS");
		printf("\n2.CELSIUS TO FAHRENHEIT");
	printf("\nEnter the any number from above list:");
	scanf("%d",&number);
	if(number==1){
		printf("ENTER THE TEMPERATURE :");
		scanf("%f",&userinputF);
		FahrenhtoCel=((userinputF-32)*(5.0/9.0));
		printf("TEMPERATURE FAHRENHEIT TO CELSIUS:%f",FahrenhtoCel);
	}
	else if(number==2){
		printf("ENTER THE TEMPERATURE:");
		scanf("%f",&userinputC);
		CeltoFahrenh=((9.0/5.0)*userinputC+32);
		printf("TEMPERATURE CELSIUS TO FAHRENHEIT :%f",CeltoFahrenh);
	}
	break;
	case 'C':
	printf("________________WELCOME TO WEIGHT CONVERTER_____________");
	printf("\nHERE IS THE LIST OF WEIGHTS:");
	printf("\n1.KILOGRAM TO GRAM");
	printf("\n2.KILOGRAM TO QUINTAL");
	printf("\n3.KILOGRAM TO TON");
	printf("\n4.GRAM TO KILOGRAM");
	printf("\n5.GRAM TO QUINTAL");
	printf("\n6.GRAM TO TON");
	printf("\n7.QUINTAL TO GRAM");
	printf("\n8.QUINTAL TO KILOGRAM");
	printf("\n9.QUINTAL TO TON");
	printf("\n10.TON TO GRAM");
	printf("\n11.TON TO KILOGRAM");
	printf("\n12.TON TO QUINTAL");
	printf("\nEnter any number from above list:");
	scanf("%d",&number);
	if(number==1){
		printf("ENTER THE WEIGHT TO CONVERT KG TO G:");
		scanf("%f",&userinputk1);
		KGtoG=userinputk1*1000;
		printf("WEIGHT KILOGRAM TO GRAM:%f",KGtoG);
	}
  else if(number==2){
		printf("ENTER THE WEIGHT TO CONVERT KG TO Q:");
		scanf("%f",&userinputk2);
		KGtoQ=userinputk2*0.01;
		printf("WEIGHT KILOGRAM TO QUINTAL:%f",KGtoQ);
}
else if(number==3){
	printf("ENTER THE WEIGHT TO CONVERT KG TO T:");
	scanf("%f",&userinputk3);
	KGtoT=userinputk3*0.001;
	printf("WEIGHT KILOGRAM TO TON:%f",KGtoT);
	}
else if(number==4){
	printf("ENTER THE WEIGHT TO CONVERT G TO KG:");
	scanf("%f",&userinputk4);
	GtoKG=userinputk4*0.001;
	printf("WEIGHT GRAM TO KILOGRAM:%f",GtoKG);
}
else if(number==5){
	printf("ENTER THE WEIGHT TO CONVERT G TO Q:");
	scanf("%f",&userinputk5);
	GtoQ=userinputk5*0.00001;
	printf("WEIGHT GRAM TO QUINTAL:%f",GtoQ);
}
else if(number==6){
	printf("ENTER THE WEIGHT TO CONVERT G TO T:");
	scanf("%f",&userinputk6);
	GtoT=userinputk6*0.000001;
	printf("WEIGHT GRAM TO TON:%f",GtoT);
}
else if(number==7){
	printf("ENTER THE WEIGHT TO CONVERT Q TO KG:");
	scanf("%f",&userinputk7);
	QtoKG=userinputk7*100;
	printf("WEIGHT  QUINTAL TO KILOGRAM:%f",QtoKG);
}
else if(number==8){
	printf("ENTER THE WEIGHT TO CONVERT Q TO G:");
	scanf("%f",&userinputk8);
	QtoG=userinputk8*100000;
	printf("WEIGHT GRAM TO QUINTAL:%f",QtoG);
}
else if(number==9){
	printf("ENTER THE WEIGHT TO CONVERT Q TO T:");
	scanf("%f",&userinputk9);
	QtoT=userinputk9*0.1;
	printf("WEIGHT QUINTAL TO TON:%f",QtoT);
}
else if(number==10){
	printf("ENTER THE WEIGHT TO CONVERT T TO KG:");
	scanf("%f",&userinputk10);
	TtoKG=userinputk10*1000;
	printf("WEIGHT TON TO KILOGRAM:%f",TtoKG);
}
else if(number==11){
	printf("ENTER THE WEIGHT TO CONVERT T TO Q:");
	scanf("%f",&userinputk11);
	TtoQ=userinputk5*10;
	printf("WEIGHT TON TO QUINTAL:%f",TtoQ);
}
else if(number==12){
	printf("ENTER THE WEIGHT TO CONVERT T TO G:");
	scanf("%f",&userinputk12);
	TtoG=userinputk12*1000000;
	printf("WEIGHT TON TO QUINTAL:%f",TtoG);
}
break;
case'D':
	printf("______________WELCOME TO LENGTH CONVERTER______________");
		printf("\nHERE IS THE LIST OF LENGTHS CONVERTER:");
	printf("\n1.METER[M]--MILLIMETER[MM]");
	printf("\n2.METER[M]--CENTIMETER[CM]");
	printf("\n3.METER[M]--KILOMETER[KM]");
	printf("\n4.KILOMETER[KM]--CENTIMETER[CM]");
	printf("\n5.KILOMETER[KM]--METER[M]");
	printf("\n6.KILOMETER[KM]--MILLIMETER[MM]");
	printf("\n7.MILLIMETER[MM]--KILOMETER[KM]");
	printf("\n8.MILLIMETER[MM]--CENTIMETER[CM]");
	printf("\n9.MILLIMETER[MM]--METER[M]");
	printf("\n10.CENTIMETER[CM]--KILOMETER[KM]");
	printf("\n11.CENTIMETER[CM]--METER[M]");
	printf("\n12.CENTIMETER[CM]--MILLIMETER[MM]");
	printf("\nEnter any number from above list:");
	scanf("%d",&number);
	if(number==1){
		printf("ENTER THE LENGTH TO CONVERT M--MM:");
		scanf("%f",&userinputl1);
		MtoMM=userinputl1*1000;
		printf("LENGTH M TO MM:%f",MtoMM);
	}
else if(number==2){
		printf("ENTER THE LENGTH TO CONVERT M--CM:");
		scanf("%f",&userinputl2);
		MtoCM=userinputl2*100;
		printf("LENGTH M TO CM:%f",MtoCM);
}
else if(number==3){
		printf("ENTER THE LENGTH TO CONVERT M--KM:");
		scanf("%f",&userinputl3);
		MtoKM=userinputl3*0.001;
		printf("LENGTH M TO KM:%f",MtoKM);
	}
	else if(number==4){
		printf("ENTER THE LENGTH TO CONVERT KM--CM:");
		scanf("%f",&userinputl4);
		KMtoCM=userinputl4*100000;
		printf("LENGTH KM TO CM:%f",KMtoCM);
	}
	else if(number==5){
		printf("ENTER THE LENGTH TO CONVERT KM--M:");
		scanf("%f",&userinputl5);
		KMtoM=userinputl5*1000;
		printf("LENGTH KM TO M:%f",KMtoM);
	}
	else if(number==6){
		printf("ENTER THE LENGTH TO CONVERT KM--MM:");
		scanf("%f",&userinputl6);
		KMtoMM=userinputl6*1000000;
		printf("LENGTH KM TO MM:%f",KMtoMM);
	}
	else if(number==7){
		printf("ENTER THE LENGTH TO CONVERT MM--KM:");
		scanf("%f",&userinputl7);
		MMtoKM=userinputl7*0.000001;
		printf("LENGTH MM TO KM:%f",MMtoKM);
	}
	else if(number==8){
		printf("ENTER THE LENGTH TO CONVERT MM--CM:");
		scanf("%f",&userinputl8);
		MMtoCM=userinputl8*0.1;
		printf("LENGTH M TO MM:%f",MMtoCM);
	}
	else if(number==9){
		printf("ENTER THE LENGTH TO CONVERT MM--M:");
		scanf("%f",&userinputl9);
		MMtoM=userinputl9*0.001;
		printf("LENGTH MM TO M:%f",MMtoM);
	}
	else if(number==10){
		printf("ENTER THE LENGTH TO CONVERT CM--KM:");
		scanf("%f",&userinputl10);
		CMtoKM=userinputl10*0.00001;
		printf("LENGTH CM TO KM:%f",CMtoKM);
		}
		else if(number==11){
		printf("ENTER THE LENGTH TO CONVERT CM--M:");
		scanf("%f",&userinputl11);
		CMtoM=userinputl11*0.01;
		printf("LENGTH CM TO M:%f",CMtoM);
	}
	else if(number==12){
		printf("ENTER THE LENGTH TO CONVERT CM--MM:");
		scanf("%f",&userinputl12);
		CMtoMM=userinputl12*10;
		printf("LENGTH CM TO MM:%f",CMtoMM);
	}
break;
case'E':
	printf("_________________WELCOME TO SPEED CONVERTER_______________");
	printf("\nHERE IS THE LIST OF SPEED CONVERTER:");
	printf("\n1.METER/SECOND[M/S]--KILOMETER/SECOND[KM/S]");
	printf("\n2.METER/SECOND[M/S]--INCH/SECOND[IN/S]");
	printf("\n3.KILOMETER/SECOND[KM/S]--KILOMETER/HOUR[KM/H]");
	printf("\n4.KILOMETER/SECOND[KM/S]--METER/SECOND[M/S]");
	printf("\n5.KILOMETER/HOUR[KM/H]--MILE/HOUR[MPH]");
	printf("\nEnter any number from above list:");
	scanf("%d",&number);
	if(number==1){
		printf("ENTER THE SPEED TO CONVERT INTO M/S TO KM/S:");
		scanf("%f",&userinputs1);
		mpstokps=userinputs1*0.001;
		printf("SPEED M/S TO KM/S :%f",mpstokps);
	}
	else if(number==2){
		printf("ENTER THE SPEED TO CONVERT INTO M/S TO IN/S:");
		scanf("%f",&userinputs2);
		mpstoinps=userinputs2*39.370079;
		printf("SPEED M/S TO IN/S :%f",mpstoinps);
	}
	else if(number==3){
		printf("ENTER THE SPEED TO CONVERT INTO KM/S TO KM/H:");
		scanf("%f",&userinputs3);
		kmpstokmph=userinputs3*3600;
		printf("SPEED KM/S TO KM/H :%f",kmpstokmph);
	}
	else if(number==4){
		printf("ENTER THE SPEED TO CONVERT INTO KM/S TO M/S:");
		scanf("%f",&userinputs4);
		kmpstomps=userinputs4*1000;
		printf("SPEED KM/S TO M/S :%f",kmpstomps);
	}
	else if(number==5){
		printf("ENTER THE SPEED TO CONVERT INTO KM/H TO M/H:");
		scanf("%f",&userinputs5);
		kmphtomph=userinputs5*0.6213711;
		printf("SPEED KM/H TO M/H :%f",kmphtomph);
	}
break;
case'F':
	printf("____________________WELCOME TO POWER CONVERTER____________________");
	printf("\nHERE IS THE LIST OF POWER CONERTER:");
	printf("\n1.WATT[W]--KILOWATT[KW]");
	printf("\n2.KILOWATT[KW]--WATT[W]");
	printf("\n3.NEWTON-METER/SECOND[N.M/S]--WATT[W]");
	printf("\n4.WATT[W]--NEWTON-METER/SECOND[N.M/S]");
	printf("\nEnter any number from above list:");
	scanf("%d",&number);
	if(number==1){
		printf("ENTER THE POWER TO CONVERT W TO KW:");
		scanf("%f",&userinputp1);
		wtokw=userinputp1*0.001;
		printf("POWER W TO KW:%f",wtokw);
	}
		else if(number==2){
		printf("ENTER THE POWER TO CONVERT KW TO W:");
		scanf("%f",&userinputp2);
		kwtow=userinputp2*1000;
		printf("POWER KW TO W:%f",kwtow);
	}
		else if(number==3){
		printf("ENTER THE POWER TO CONVERT NMPS TO W:");
		scanf("%f",&userinputp3);
		Nmpstow=userinputp3*1;
		printf("POWER NMPS TO W:%f",Nmpstow);
	}
		else if(number==4){
		printf("ENTER THE POWER TO CONVERT W TO NMPS:");
		scanf("%f",&userinputp4);
		wtoNmps=userinputp4*1;
		printf("POWER W TO KMPS:%f",wtoNmps);
	}
break;
case'G':
	printf("_______________________WELCOME TO AREA CONVERTER___________________");
	printf("\nHERE IS THE LIST OF AREA CONVERTER:");
	printf("\n1.SQUARE METER--SQUARE CENTIMETER");
	printf("\n2.SQUARE KILOMETER--SQUARE METER");
	printf("\n3.SQUARE METER--SQUARE DECIMETER");
	printf("\n4.SQUARE DECIMETER--SQAURE METER");
	printf("\n5.SQAURE DECIMETER--SQAURE KILOMETER");
	printf("\nEnter any number from above list:");
	scanf("%d",&number);
	if(number==1){
		printf("ENTER THE AREA TO CONVERT SM TO SCM:");
		scanf("%f",&userinputa1);
		SMtoSCM=userinputa1*10000;
		printf("AREA SM TO SCM:%f",SMtoSCM);
			}
	else if(number==2){
		printf("ENTER THE AREA TO CONVERT SKM TO SM:");
		scanf("%f",&userinputa2);
		SKMtoSM=userinputa2*1000000;
		printf("AREA SKM TO SM:%f",SKMtoSM);

	}
	else if(number==3){
		printf("ENTER THE AREA TO CONVERT SM TO SDM:");
		scanf("%f",&userinputa3);
		SMtoSDM=userinputa3*100;
		printf("AREA SM TO SDM:%f",SMtoSDM);

	}
	else if(number==4){
		printf("ENTER THE AREA TO CONVERT SDM TO SM:");
		scanf("%f",&userinputa4);
		SDMtoSM=userinputa4*0.01;
		printf("AREA SDM TO SM:%f",SDMtoSM);

	}
	else if(number==5){
		printf("ENTER THE AREA TO CONVERT SDM TO SKM:");
		scanf("%f",&userinputa5);
		SDMtoSKM=userinputa5*0.00000001;
		printf("AREA SDM TO SKM:%f",SDMtoSKM);
}
break;
default:
	printf("ENTERED WRONG INPUT");
}
	printf("\n ENTER 1 GOTO MAIN MENU");
	scanf("%d",&p);
}
while(p==1);


}





		
