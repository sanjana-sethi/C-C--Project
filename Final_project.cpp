#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
class hospital
{
	int ch8,pid,b_bill,f_bill,m_bill,d_bill,t_bill,total_bill=0;
	int ch9,sid,nsalary=0;
	char bn[10],doa[20],toa[10],dod[20],tod[10],pn[30],dob[15],age[10],
	g[20],bg[10],ms[15],ads[30],cn[15],eid[30],po[20],n[30],ano[20],
	gn[30],gage[10],gcn[15],go[20],gads[30],an[30],ar[20],acn[15],coa[20],dn[30],
	sn[30],dob1[15],age1[10],g1[20],bg1[10],ms1[30],ads1[30],
	cn1[15],eid1[30],d[30],n1[30],ano1[15];
	public:
	void about();
	void add();	
	void search();
	void display();
	void modify();
	void del();
	void bill();
	void ward_gen();
	void ward_ac();
	void ward_lux();
	void bed();
	void food();
	void medicine();
	void doctor();
	void treatment();
	void staff_add();
	void staff_search();
	void staff_display();
	void staff_modify();
	void staff_del();
	void staff_salary();
	void s_doctor();
	void s_nurse();
	void s_compounder();
	void s_ward();
}h;


void hospital::add()
{
	system("cls");
	cout<<"====================ADD PATIENT RECORD SECTION==================\n\n";
	ofstream ofs("hosdata.txt",ios::app);
	cout<<"\nEnter Patient ID\t\t:";
	cin>>pid;
	cout<<"\nEnter Bed No.\t\t\t:";
	fflush(stdin);
	gets(bn);
	cout<<"\nEnter Date of Admit\t\t:";
	gets(doa);
	cout<<"\nEnter Time of Admit\t\t:";
	gets(toa);
	cout<<"\nEnter Date of Discharge\t\t:";
	gets(dod);
	cout<<"\nEnter time of Discharge\t\t:";
	gets(tod);
	cout<<"\nEnter Patient Name\t\t:";
	gets(pn);
	cout<<"\nEnter Date of Birth\t\t:";
	gets(dob);
	cout<<"\nEnter Age\t\t\t:";
	gets(age);
	cout<<"\nEnter Gender\t\t\t:";
	gets(g);
	cout<<"\nEnter Blood Group\t\t:";
	gets(bg);
	cout<<"\nEnter Marital Status\t\t:";
	gets(ms);
	cout<<"\nEnter Address\t\t\t:";
	gets(ads);
	cout<<"\nEnter Contact No.\t\t:";
	gets(cn);
	cout<<"\nEnter Email ID\t\t\t:";
	gets(eid);
	cout<<"\nEnter Patient Occupation\t:";
	gets(po);
	cout<<"\nEnter Nationality\t\t:";
	gets(n);
	cout<<"\nEnter Adhaar Card No.\t\t:";
	gets(ano);
	cout<<"\nEnter Guardian's Name\t\t:";
	gets(gn);
	cout<<"\nEnter Guardian's Age\t\t:";
	gets(gage);
	cout<<"\nEnter Guardian's Contact No.\t:";
	gets(gcn);
	cout<<"\nEnter Guardian's Occupation\t:";
	gets(go);
	cout<<"\nEnter Guardian's Address\t:";
	gets(gads);
	cout<<"\nAttendant Name\t\t\t:";
	gets(an);
	cout<<"\nAttendant Relationship\t\t:";
	gets(ar);
	cout<<"\nAttendant Contact No.\t\t:";
	gets(acn);
	cout<<"\nEnter Cause of Admit\t\t:";
	gets(coa);
	cout<<"\nEnter Doctor Name\t\t:";
	gets(dn);
	total_bill=0;
	ofs.write((char*)&h,sizeof(hospital));
	cout<<"\n===================================================";
	cout<<"\n\nRecord Added Successfully!!!";
	ofs.close();
}

void hospital::search()
{
	int pid1,flag=0;
	system("cls");
	cout<<"==================SEARCH PATIENT RECORD=================\n\n";
	ifstream ifs("hosdata.txt");
	if(!ifs)
	{
		cout<<"\nFile doesn't exist";
		getch();
		exit(0);
	}
	cout<<"\nEnter Patient ID to Search:";
	cin>>pid1;
	while(ifs.read((char*)&h,sizeof(hospital)))
	{
		if(pid1==pid)
		{
			cout<<"\nPatient ID\t\t:"<<pid;
			cout<<"\nBed No.\t\t\t:"<<bn;
			cout<<"\nDate of Admit\t\t:"<<doa;
			cout<<"\nTime of Admit\t\t:"<<toa;
			cout<<"\nDate of Discharge\t:"<<dod;
			cout<<"\nTime of Discharge\t:"<<tod;
			cout<<"\nPatient Name\t\t:"<<pn;
			cout<<"\nDate of Birth\t\t:"<<dob;
			cout<<"\nAge\t\t\t:"<<age;
			cout<<"\nGender\t\t\t:"<<g;
			cout<<"\nBlood Group\t\t:"<<bg;
			cout<<"\nMarital Status\t\t:"<<ms;
			cout<<"\nAddress\t\t\t:"<<ads;
			cout<<"\nContact No.\t\t:"<<cn;
			cout<<"\nEmail ID\t\t:"<<eid;
			cout<<"\nPatient Occupation\t:"<<po;
			cout<<"\nNationality\t\t:"<<n;
			cout<<"\nAdhaar Card No.\t\t:"<<ano;
			cout<<"\nGuardian's Name\t\t:"<<gn;
			cout<<"\nGuardian's Age\t\t:"<<gage;
			cout<<"\nGuardian's Contact No.\t:"<<gcn;
			cout<<"\nGuardian's Occupation\t:"<<go;
			cout<<"\nGuardian's Address\t:"<<gads;
			cout<<"\nAttendant Name\t\t:"<<an;
			cout<<"\nAttendant Relationship\t:"<<ar;
			cout<<"\nAttendant Contact No.\t:"<<acn;
			cout<<"\nCause of Admit\t\t:"<<coa;
			cout<<"\nDoctor Name\t\t:"<<dn;
			cout<<"\nTotal Bill\t\t:"<<total_bill;
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"Patient ID not Found";
	}
	ifs.close();
}

void hospital::display()
{
	system("cls");
	cout<<"==================DISPLAY PATIENT RECORD=================\n\n";
	ifstream ifs("hosdata.txt");
	if(!ifs)
	{
		cout<<"File doesn't Exist";
		getch();
		exit(0);
	}
	while(ifs.read((char*)&h,sizeof(hospital)))
	{
			cout<<"\n=================================================";
			cout<<"\nPatient ID\t\t:"<<pid;
			cout<<"\nBed No.\t\t\t:"<<bn;
			cout<<"\nDate of Admit\t\t:"<<doa;
			cout<<"\nTime of Admit\t\t:"<<toa;
			cout<<"\nDate of Discharge\t:"<<dod;
			cout<<"\nTime of Discharge\t:"<<tod;
			cout<<"\nPatient Name\t\t:"<<pn;
			cout<<"\nDate of Birth\t\t:"<<dob;
			cout<<"\nAge\t\t\t:"<<age;
			cout<<"\nGender\t\t\t:"<<g;
			cout<<"\nBlood Group\t\t:"<<bg;
			cout<<"\nMarital Status\t\t:"<<ms;
			cout<<"\nAddress\t\t\t:"<<ads;
			cout<<"\nContact No.\t\t:"<<cn;
			cout<<"\nEmail ID\t\t:"<<eid;
			cout<<"\nPatient Occupation\t:"<<po;
			cout<<"\nNationality\t\t:"<<n;
			cout<<"\nAdhaar Card No.\t\t:"<<ano;
			cout<<"\nGuardian's Name\t\t:"<<gn;
			cout<<"\nGuardian's Age\t\t:"<<gage;
			cout<<"\nGuardian's Contact No.\t:"<<gcn;
			cout<<"\nGuardian's Occupation\t:"<<go;
			cout<<"\nGuardian's Address\t:"<<gads;
			cout<<"\nAttendant Name\t\t:"<<an;
			cout<<"\nAttendant Relationship\t:"<<ar;
			cout<<"\nAttendant Contact No.\t:"<<acn;
			cout<<"\nCause of Admit\t\t:"<<coa;
			cout<<"\nDoctor Name\t\t:"<<dn;
			if(total_bill!=0)
			{
				cout<<"\nTotal Bill\t\t:"<<total_bill;
			}
			cout<<"\n=================================================";
			getch();
	}
	ifs.close();
}

void hospital::modify()
{
	int pid2,flag=0,ch1;
	system("cls");
	cout<<"======================MODIFY RECORD SECTION=====================\n\n";
	ifstream ifs("hosdata.txt");
	if(!ifs)
	{
		cout<<"\nFile doesn't exist";
		getch();
		exit(0);
	}
	ofstream ofs("temp.txt");
	cout<<"\nEnter Patient ID to modify:";
	cin>>pid2;
	while(ifs.read((char*)&h,sizeof(hospital)))
	{
		if(pid2==pid)
		{
			flag=1;
			cout<<"\nYou can modify the following data:\n";
			cout<<"\n1-  Bed No.\t\t\t:";
			cout<<"\n2-  Date of Admit\t\t:";
			cout<<"\n3-  Time of Admit\t\t:";
			cout<<"\n4-  Date of Discharge\t\t:";
			cout<<"\n5-  Time of Discharge\t\t:";
			cout<<"\n6-  Patient Name\t\t:";
			cout<<"\n7-  Date of Birth\t\t:";
			cout<<"\n8-  Age\t\t\t\t:";
			cout<<"\n9-  Gender\t\t\t:";
			cout<<"\n10- Blood Group\t\t\t:";
			cout<<"\n11- Marital Status\t\t:";
			cout<<"\n12- Address\t\t\t:";
			cout<<"\n13- Contact No.\t\t\t:";
			cout<<"\n14- Email ID\t\t\t:";
			cout<<"\n15- Patient Occupation\t\t:";
			cout<<"\n16- Nationality\t\t\t:";
			cout<<"\n17- Adhaar Card No.\t\t:";
			cout<<"\n18- Guardian's Name\t\t:";
			cout<<"\n19- Guardian's Age\t\t:";
			cout<<"\n20- Guardian's Contact No.\t:";
			cout<<"\n21- Guardian's Occupation\t:";
			cout<<"\n22- Guardian's Address\t\t:";
			cout<<"\n23- Attendant Name\t\t:";
			cout<<"\n24- Attendant Relationship\t:";
			cout<<"\n25- Attendant Contact No.\t:";
			cout<<"\n26- Cause of Admit\t\t:";
			cout<<"\n27- Doctor Name\t\t\t:";
			cout<<"\n\nEnter Your Choice (1-27):";
			cin>>ch1;
			fflush(stdin);
			switch(ch1)
			{
				case 1:
				cout<<"\nEnter Bed No.\t\t\t:";
				gets(bn);
				break;
				
				case 2:
				cout<<"\nEnter Date of Admit\t\t:";
				gets(doa);
				break;
				
				case 3:
				cout<<"\nEnter Time of Admit\t\t:";
				gets(toa);
				break;
				
				case 4:
				cout<<"\nEnter Date of Discharge\t\t:";
				gets(dod);
				break;
				
				case 5:
				cout<<"\nEnter time of Discharge\t\t:";
				gets(tod);
				break;
				
				case 6:
				cout<<"\nEnter Patient Name\t\t:";
				gets(pn);
				break;
				
				case 7:
				cout<<"\nEnter Date of Birth\t\t:";
				gets(dob);
				break;
				
				case 8:
				cout<<"\nEnter Age\t\t\t:";
				gets(age);
				break;
				
				case 9:
				cout<<"\nEnter Gender\t\t\t:";
				gets(g);
				break;
				
				case 10:
				cout<<"\nEnter Blood Group\t\t:";
				gets(bg);
				break;
				
				case 11:
				cout<<"\nEnter Marital Status\t\t:";
				gets(ms);
				break;
				
				case 12:
				cout<<"\nEnter Address\t\t\t:";
				gets(ads);
				break;
				
				case 13:
				cout<<"\nEnter Contact No.\t\t:";
				gets(cn);
				break;
				
				case 14:
				cout<<"\nEnter Email ID\t\t\t:";
				gets(eid);
				break;
				
				case 15:
				cout<<"\nEnter Patient Occupation\t:";
				gets(po);
				break;
				
				case 16:
				cout<<"\nEnter Nationality\t\t:";
				gets(n);
				break;
				
				case 17:
				cout<<"\nEnter Adhaar Card No.\t\t:";
				gets(ano);
				break;
				
				case 18:
				cout<<"\nEnter Guardian's Name\t\t:";
				gets(gn);
				break;
				
				case 19:
				cout<<"\nEnter Guardian's Age\t\t:";
				gets(gage);
				break;
				
				case 20:
				cout<<"\nEnter Guardian's Contact No.\t:";
				gets(gcn);
				break;
				
				case 21:
				cout<<"\nEnter Guardian's Occupation\t:";
				gets(go);
				break;
				
				case 22:
				cout<<"\nEnter Guardian's Address\t:";
				gets(gads);
				break;
				
				case 23:
				cout<<"\nAttendant Name\t\t\t:";
				gets(an);
				break;
				
				case 24:
				cout<<"\nAttendant Relationship\t\t:";
				gets(ar);
				break;
				
				case 25:
				cout<<"\nAttendant Contact No.\t\t:";
				gets(acn);
				break;
				
				case 26:
				cout<<"\nEnter Cause of Admit\t\t:";
				gets(coa);
				break;
				
				case 27:
				cout<<"\nEnter Doctor Name\t\t:";
				gets(dn);
				break;
					
				default:
					cout<<"\nInvalid Choice";
			}
			ofs.write((char*)&h,sizeof(hospital));
		}
		else
		{
			ofs.write((char*)&h,sizeof(hospital));
		}
	}
	ifs.close();
	cout<<"\n\nRecord Modified Successfully!!!";
	ofs.close();
	remove("hosdata.txt");
	rename("temp.txt","hosdata.txt");
}

void hospital::del()
{
	int pid3,flag=0;
	system("cls");
	cout<<"======================DELETE RECORD SECTION=====================\n\n";
	ifstream ifs("hosdata.txt");
	if(!ifs)
	{
		cout<<"\nFile doesn't exist";
		getch();
		exit(0);
	}
	ofstream ofs("temp.txt");
	cout<<"\nEnter Patient ID to Delete:";
	cin>>pid3;
	while(ifs.read((char*)&h,sizeof(hospital)))	
	{
		if(pid3==pid)
		{
			flag=1;
			cout<<"\nRecord Deleted Successfully!!!";
		}
		else
		{
			ofs.write((char*)&h,sizeof(hospital));
		}
	}
	ifs.close();
	ofs.close();
	remove("hosdata.txt");
	rename("temp.txt","hosdata.txt");
}	

void hospital::bill()
{
	int ch2,flag=0,pid4,tbill=0;
	system("cls");
	cout<<"======================PATIENT BILL GENERATION SECTION=====================\n\n";
	ifstream ifs("hosdata.txt");
	if(!ifs)
	{
		cout<<"\nFile doesn't exist";
		getch();
		exit(0);
	}
	ofstream ofs("temp.txt");
	cout<<"\nEnter Patient ID for Bill\t:";
	cin>>pid4;
	while(ifs.read((char*)&h,sizeof(hospital)))	
	{
		if(pid4==pid)
		{
			system("cls");
			flag=1;
			cout<<"\n--------------List of Facilities-------------\n";
			cout<<"\n1- Bed Charge";
			cout<<"\n2- Food Charge";
			cout<<"\n3- Medicine Charge";
			cout<<"\n4- Doctor Charge";
			cout<<"\n5- Treatment Charge";
			cout<<"\n\nEnter Your Choice (1-5):";
			cin>>ch2;
			switch(ch2)
			{
				case 1:
				bed();
				goto a;
				break;
				case 2:
				a:	
				food();
				goto b;
				break;
				case 3:
				b:	
				medicine();
				goto c;
				break;
				case 4:
				c:	
				doctor();
				goto d;
				break;
				case 5:
				d:	
				treatment();
				break;
				default:
				cout<<"\nInvalid Choice";
			}
			ofs.write((char*)&h,sizeof(hospital));
		}
		else
		{
			ofs.write((char*)&h,sizeof(hospital));	
		}
	}
	if(flag==0)
	{
		cout<<"\nPatient ID not Found";
	}
	ofs.close();
	ifs.close();
	remove("hosdata.txt");
	rename("temp.txt","hosdata.txt");
}

void hospital::bed()
{
	int ch3,bdays;
	int gw=700,cb=2000,ew=3000,icu=5000,b_bill;
	system("cls");
	cout<<"\n*************Bed Charge************\n";
					cout<<"\n1- General Ward";
					cout<<"\n2- Cabin";
					cout<<"\n3- Emergency Ward";
					cout<<"\n4- ICU";
					cout<<"\n\nEnter Your Choice (1-4):";
					cin>>ch3;
					switch(ch3)
					{
						case 1:
							cout<<"\nGeneral Ward Charge="<<gw;
							b_bill=gw;
							cout<<"\nNo. of days to admit=";
							cin>>bdays;
							b_bill=b_bill*bdays;
							cout<<"\nBed Charges="<<b_bill;
							total_bill=total_bill+b_bill;
							cout<<"\nTotal Bill="<<total_bill;
							break;
						case 2:
							cout<<"\nCabin="<<cb;
							b_bill=cb;
							cout<<"\nNo. of days to admit=";
							cin>>bdays;
							b_bill=b_bill*bdays;
							cout<<"\nBed Charges="<<b_bill;
							total_bill=total_bill+b_bill;
							cout<<"\nTotal Bill="<<total_bill;
							break;
						case 3:
							cout<<"\nEmergency Ward="<<ew;
							b_bill=ew;
							cout<<"\nNo. of days to admit=";
							cin>>bdays;
							b_bill=b_bill*bdays;
							cout<<"\nBed Charges="<<b_bill;
							total_bill=total_bill+b_bill;
							cout<<"\nTotal Bill="<<total_bill;
							break;
						case 4:
							cout<<"\nICU="<<icu;
							b_bill=icu;
							cout<<"\nNo. of days to admit=";
							cin>>bdays;
							b_bill=b_bill*bdays;
							cout<<"\nBed Charges="<<b_bill;
							total_bill=total_bill+b_bill;
							cout<<"\nTotal Bill="<<total_bill;
							break;
					}
					getch();				
}

void hospital::food()
{
	int ch4,fdays;
	int bc=100,lc=200,dc=150,f_bill;
	system("cls");
					cout<<"\n*************Food Charge************\n";
					cout<<"\n\n1- Breakfast Combo";
					cout<<"\n2- Lunch Combo";
					cout<<"\n3- Dinner Combo";
					cout<<"\n\nEnter Your Choice (1-3):";
					cin>>ch4;
					switch(ch4)
					{
						case 1:
							cout<<"\nBreakfast Combo="<<bc;
							f_bill=bc;
							cout<<"\nNo. of days for food=";
							cin>>fdays;
							f_bill=f_bill*fdays;
							cout<<"\nFood Charges="<<f_bill;
							total_bill=total_bill+f_bill;
							cout<<"\nTotal Bill="<<total_bill;
							break;
						case 2:
							cout<<"\nLunch Combo="<<lc;
							f_bill=lc;
							cout<<"\nNo. of days for food=";
							cin>>fdays;
							f_bill=f_bill*fdays;
							cout<<"\nFood Charges="<<f_bill;
							total_bill=total_bill+f_bill;
							cout<<"\nTotal Bill="<<total_bill;
							break;
						case 3:
							cout<<"\nDinner Combo="<<dc;
							f_bill=dc;
							cout<<"\nNo. of days for food=";
							cin>>fdays;
							f_bill=f_bill*fdays;
							cout<<"\nFood Charges="<<f_bill;
							total_bill=total_bill+f_bill;
							cout<<"\nTotal Bill="<<total_bill;
							break;
					}
					getch();			
}

void hospital::medicine()
{
	int ch5,nstrips;
	int pt=53,ct=90,ac=120,pi=155,mi=50,av=30,m_bill;
	system("cls");
	cout<<"\n\n************Medicine Charge**************\n";
					cout<<"\n1- Paracetamol 500mg Tablet";
					cout<<"\n2- Cetrizine 10mg Tablet";
					cout<<"\n3- Amoxycilin 500mg Capsule";
					cout<<"\n4- Pantoprazole 40 mg Injection";
					cout<<"\n5- Multivitamin 1ml Injection";
					cout<<"\n6- Avilin 2ml";
					cout<<"\n\nEnter Your Choice (1-6):";
					cin>>ch5;
					switch(ch5)
					{
						case 1:
						cout<<"\nParacetamol 500mg Tablet="<<pt;
						m_bill=pt;
						cout<<"\nNo. of strips=";
						cin>>nstrips;
						m_bill=m_bill*nstrips;
						cout<<"\nMedicine Charges="<<m_bill;
						total_bill=total_bill+m_bill;
						cout<<"\nTotal Bill="<<total_bill;	
						break;
						case 2:
						cout<<"\nCetrizine 10mg Tablet="<<ct;
						m_bill=ct;
						cout<<"\nNo. of strips=";
						cin>>nstrips;
						m_bill=m_bill*nstrips;
						cout<<"\nMedicine Charges="<<m_bill;
						total_bill=total_bill+m_bill;
						cout<<"\nTotal Bill="<<total_bill;	
						break;
						case 3:
						cout<<"\nAmoxycilin 500mg Capsule="<<ac;
						m_bill=ac;
						cout<<"\nNo. of strips=";
						cin>>nstrips;
						m_bill=m_bill*nstrips;
						cout<<"\nMedicine Charges="<<m_bill;
						total_bill=total_bill+m_bill;	
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 4:
						cout<<"\nPantoprazole 40 mg Injection="<<pi;
						m_bill=pi;
						cout<<"\nNo. of strips=";
						cin>>nstrips;
						m_bill=m_bill*nstrips;
						cout<<"\nMedicine Charges="<<m_bill;
						total_bill=total_bill+m_bill;
						cout<<"\nTotal Bill="<<total_bill;	
						break;
						case 5:
						cout<<"\nMultivitamin 1ml Injection="<<mi;
						m_bill=mi;
						cout<<"\nNo. of dose=";
						cin>>nstrips;
						m_bill=m_bill*nstrips;
						cout<<"\nMedicine Charges="<<m_bill;
						total_bill=total_bill+m_bill;	
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 6:
						cout<<"\nAvilin 2ml="<<av;
						m_bill=av;
						cout<<"\nNo. of dose=";
						cin>>nstrips;
						m_bill=m_bill*nstrips;
						cout<<"\nMedicine Charges="<<m_bill;
						total_bill=total_bill+m_bill;
						cout<<"\nTotal Bill="<<total_bill;	
						break;
					}
					getch();
}

void hospital::doctor()
{
	int ch6,ddays;
	int dk=500,st=500,sm=500,rd=500,rp=500,sd=500,d_bill;
	system("cls");
	cout<<"\n\n************Doctor Charge**************\n";
					cout<<"\n1- Dr. Debjeet Kar";
					cout<<"\n2- Dr. Sanjay Tirkey";
					cout<<"\n3- Dr. Sanjeet Mahanty";
					cout<<"\n4- Dr. Rohit Dash";
					cout<<"\n5- Dr. Rupali Panda";
					cout<<"\n6- Dr. Sunita Das";
					cout<<"\n\nEnter Your Choice (1-6):";
					cin>>ch6;
					switch(ch6)
					{
						case 1:
						cout<<"\nDr. Debjeet Kar="<<dk;	
						d_bill=dk;
						cout<<"\nNo of Days=";
						cin>>ddays;
						d_bill=d_bill*ddays;
						cout<<"\nDoctor Charge="<<d_bill;
						total_bill=total_bill+d_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 2:
						cout<<"\nDr. Sanjay Tirkey="<<st;
						d_bill=st;
						cout<<"\nNo of Days=";
						cin>>ddays;
						d_bill=d_bill*ddays;
						cout<<"\nDoctor Charge="<<d_bill;
						total_bill=total_bill+d_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 3:
						cout<<"\nDr. Sanjeet Mahanty="<<sm;
						d_bill=sm;
						cout<<"\nNo of Days=";
						cin>>ddays;
						d_bill=d_bill*ddays;
						cout<<"\nDoctor Charge="<<d_bill;
						total_bill=total_bill+d_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 4:
						cout<<"\nDr. Rohit Dash="<<rd;
						d_bill=rd;
						cout<<"\nNo of Days=";
						cin>>ddays;
						d_bill=d_bill*ddays;
						cout<<"\nDoctor Charge="<<d_bill;
						total_bill=total_bill+d_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 5:
						cout<<"\nDr. Rupali Panda="<<rp;
						d_bill=rp;
						cout<<"\nNo of Days=";
						cin>>ddays;
						d_bill=d_bill*ddays;
						cout<<"\nDoctor Charge="<<d_bill;
						total_bill=total_bill+d_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 6:
						cout<<"\nDr. Sunita Das="<<sd;
						d_bill=sd;
						cout<<"\nNo of Days=";
						cin>>ddays;
						d_bill=d_bill*ddays;
						cout<<"\nDoctor Charge="<<d_bill;
						total_bill=total_bill+d_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
					}
					getch();
}

void hospital::treatment()
{
	int ch7,tdays;	
	int xray=500,us=1000,cs=800,bt=300,ecg=800,t_bill;
	system("cls");
	cout<<"\n\n************Treatment Charge**************\n";
					cout<<"\n1- X-Ray";
					cout<<"\n2- Ultrasound";
					cout<<"\n3- CT Scan";
					cout<<"\n4- Blood Test";
					cout<<"\n5- ECG";
					cout<<"\n\nEnter Your Choice (1-5):";
					cin>>ch7;
					switch(ch7)
					{
						case 1:
						cout<<"\nX-Ray="<<xray;
						t_bill=xray;
						cout<<"\nNo of Times=";
						cin>>tdays;
						t_bill=t_bill*tdays;
						cout<<"\nTreatment Charge="<<t_bill;
						total_bill=total_bill+t_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 2:
						cout<<"\nUltrasound="<<us;
						t_bill=us;
						cout<<"\nNo of Times=";
						cin>>tdays;
						t_bill=t_bill*tdays;
						cout<<"\nTreatment Charge="<<t_bill;
						total_bill=total_bill+t_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 3:
						cout<<"\nCT Scan="<<cs;
						t_bill=cs;
						cout<<"\nNo of Times=";
						cin>>tdays;
						t_bill=t_bill*tdays;
						cout<<"\nTreatment Charge="<<t_bill;
						total_bill=total_bill+t_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 4:
						cout<<"\nBlood Test="<<bt;
						t_bill=bt;
						cout<<"\nNo of Times=";
						cin>>tdays;
						t_bill=t_bill*tdays;
						cout<<"\nTreatment Charge="<<t_bill;
						total_bill=total_bill+t_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
						case 5:
						cout<<"\nECG="<<ecg;
						t_bill=ecg;
						cout<<"\nNo of Times=";
						cin>>tdays;
						t_bill=t_bill*tdays;
						cout<<"\nTreatment Charge="<<t_bill;
						total_bill=total_bill+t_bill;
						cout<<"\nTotal Bill="<<total_bill;
						break;
					}
					getch();
}


void hospital::staff_add()
{
	system("cls");
	cout<<"====================ADD STAFF RECORD SECTION==================\n\n";
	ofstream ofs("staffdata.txt",ios::app);
	cout<<"\nEnter Staff ID\t\t\t:";
	cin>>sid;
	cout<<"\nEnter Staff Name\t\t:";
	fflush(stdin);
	gets(sn);
	cout<<"\nEnter Date of Birth\t\t:";
	gets(dob1);
	cout<<"\nEnter Age\t\t\t:";
	gets(age1);
	cout<<"\nEnter Gender\t\t\t:";
	gets(g1);
	cout<<"\nEnter Blood Group\t\t:";
	gets(bg1);
	cout<<"\nEnter Marital Status\t\t:";
	gets(ms1);
	cout<<"\nEnter Address\t\t\t:";
	gets(ads1);
	cout<<"\nEnter Contact No.\t\t:";
	gets(cn1);
	cout<<"\nEnter Email ID\t\t\t:";
	gets(eid1);
	cout<<"\nEnter Staff Designation\t\t:";
	gets(d);
	cout<<"\nEnter Nationality\t\t:";
	gets(n1);
	cout<<"\nEnter Adhaar Card No.\t\t:";
	gets(ano1);
	nsalary=0;
	ofs.write((char*)&h,sizeof(hospital));
	cout<<"\n===================================================";
	cout<<"\n\nRecord Added Successfully!!!";
	ofs.close();
}

void hospital::staff_search()
{
	int sid1,flag=0;
	system("cls");
	cout<<"=========================SEARCH STAFF RECORD========================\n\n";
	ifstream ifs("staffdata.txt");
	if(!ifs)
	{
		cout<<"\nFile doesn't exist";
		getch();
		exit(0);
	}
	cout<<"\nEnter Staff ID to Search:";
	cin>>sid1;
	while(ifs.read((char*)&h,sizeof(hospital)))
	{
		if(sid1==sid)
		{
			cout<<"\nEnter Staff Name\t\t:"<<sn;
			cout<<"\nEnter Date of Birth\t\t:"<<dob1;
			cout<<"\nEnter Age\t\t\t:"<<age1;
			cout<<"\nEnter Gender\t\t\t:"<<g1;
			cout<<"\nEnter Blood Group\t\t:"<<bg1;
			cout<<"\nEnter Marital Status\t\t:"<<ms1;
			cout<<"\nEnter Address\t\t\t:"<<ads1;
			cout<<"\nEnter Contact No.\t\t:"<<cn1;
			cout<<"\nEnter Email ID\t\t\t:"<<eid1;
			cout<<"\nEnter Designation\t\t:"<<d;
			cout<<"\nEnter Nationality\t\t:"<<n1;
			cout<<"\nEnter Adhaar Card No.\t\t:"<<ano1;
			cout<<"\nSalary\t\t\t\t:"<<nsalary;
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"Staff ID not Found";
	}
	ifs.close();
}

void hospital::staff_display()
{
	
	system("cls");
	cout<<"=============================DISPLAY STAFF RECORD==========================\n\n";
	ifstream ifs("staffdata.txt");
	if(!ifs)
	{
		cout<<"File doesn't Exist";
		getch();
		exit(0);
	}
	while(ifs.read((char*)&h,sizeof(hospital)))
	{
		cout<<"\n=================================================================";
		cout<<"\nStaff ID\t\t\t:"<<sid;
		cout<<"\nEnter Staff Name\t\t:"<<sn;
		cout<<"\nEnter Date of Birth\t\t:"<<dob1;
		cout<<"\nEnter Age\t\t\t:"<<age1;
		cout<<"\nEnter Gender\t\t\t:"<<g1;
		cout<<"\nEnter Blood Group\t\t:"<<bg1;
		cout<<"\nEnter Marital Status\t\t:"<<ms1;
		cout<<"\nEnter Address\t\t\t:"<<ads1;
		cout<<"\nEnter Contact No.\t\t:"<<cn1;
		cout<<"\nEnter Email ID\t\t\t:"<<eid1;
		cout<<"\nEnter Staff Designation\t\t:"<<d;
		cout<<"\nEnter Nationality\t\t:"<<n1;
		cout<<"\nEnter Adhaar Card No.\t\t:"<<ano1;
		if(nsalary!=0)
			{
				cout<<"\nNet Salary\t\t\t:"<<nsalary;
			}
			cout<<"\n=================================================================";
			getch();
	}
	ifs.close();
}

void hospital::staff_modify()
{
	int sid2,flag=0,ch10;
	system("cls");
	cout<<"========================MODIFY RECORD SECTION=======================\n\n";
	ifstream ifs("staffdata.txt");
	if(!ifs)
	{
		cout<<"\nFile doesn't exist";
		getch();
		exit(0);
	}
	ofstream ofs("temp1.txt");
	cout<<"\nEnter Staff ID to modify:";
	cin>>sid2;
	while(ifs.read((char*)&h,sizeof(hospital)))
	{
		if(sid2==sid)
		{
			flag=1;
			cout<<"\nYou can modify the following data:\n";
			cout<<"\n1-  Enter Staff Name\t\t:"<<sn;
			cout<<"\n2-  Enter Date of Birth\t\t:"<<dob1;
			cout<<"\n3-  Enter Age\t\t\t:"<<age1;
			cout<<"\n4-  Enter Gender\t\t:"<<g1;
			cout<<"\n5-  Enter Blood Group\t\t:"<<bg1;
			cout<<"\n6-  Enter Marital Status\t:"<<ms1;
			cout<<"\n7-  Enter Address\t\t:"<<ads1;
			cout<<"\n8-  Enter Contact No.\t\t:"<<cn1;
			cout<<"\n9-  Enter Email ID\t\t:"<<eid1;
			cout<<"\n10- Enter Staff Designation\t:"<<d;
			cout<<"\n11- Enter Nationality\t\t:"<<n1;
			cout<<"\n12- Enter Adhaar Card No.\t:"<<ano1;
			cout<<"\n\nEnter Your Choice (1-12):";
			cin>>ch10;
			fflush(stdin);
			switch(ch10)
			{
				case 1:
				cout<<"\nEnter Staff Name\t\t:";
				gets(sn);
				break;
				
				case 2:
				cout<<"\nEnter Date of Birth\t\t:";
				gets(dob1);
				break;
				
				case 3:
				cout<<"\nEnter Age\t\t\t:";
				gets(age1);
				break;
				
				case 4:
				cout<<"\nEnter Gender\t\t\t:";
				gets(g1);
				break;
				
				case 5:
				cout<<"\nEnter Blood Group\t\t:";
				gets(bg1);
				break;
				
				case 6:
				cout<<"\nEnter Marital Status\t\t:";
				gets(ms1);
				break;
				
				case 7:
				cout<<"\nEnter Address\t\t\t:";
				gets(ads1);
				break;
				
				case 8:
				cout<<"\nEnter Contact No.\t\t:";
				gets(cn1);
				break;
				
				case 9:
				cout<<"\nEnter Email ID\t\t\t:";
				gets(eid1);
				break;
				
				case 10:
				cout<<"\nEnter Staff Designation\t:";
				gets(d);
				break;
				
				case 11:
				cout<<"\nEnter Nationality\t\t\t:";
				gets(n1);
				break;
				
				case 12:
				cout<<"\nEnter Adhaar Card No.\t\t:";
				gets(ano1);
				break;
				
				default:
					cout<<"\nInvalid Choice";
			}
			ofs.write((char*)&h,sizeof(hospital));
		}
		else
		{
			ofs.write((char*)&h,sizeof(hospital));
		}
	}
	ifs.close();
	cout<<"\n\nRecord Modified Successfully!!!";
	ofs.close();
	remove("staffdata.txt");
	rename("temp1.txt","staffdata.txt");
}

void hospital::staff_del()
{
	int sid3,flag=0;
	system("cls");
	cout<<"======================DELETE RECORD SECTION=====================\n\n";
	ifstream ifs("staffdata.txt");
	if(!ifs)
	{
		cout<<"\nFile doesn't exist";
		getch();
		exit(0);
	}
	ofstream ofs("temp1.txt");
	cout<<"\nEnter Staff ID to Delete:";
	cin>>sid3;
	while(ifs.read((char*)&h,sizeof(hospital)))	
	{
		if(sid3==sid)
		{
			flag=1;
			cout<<"\nRecord Deleted Successfully!!!";
		}
		else
		{
			ofs.write((char*)&h,sizeof(hospital));
		}
	}
	ifs.close();
	ofs.close();
	remove("staffdata.txt");
	rename("temp1.txt","staffdata.txt");
}	

void hospital::staff_salary()
{
	int sid4,flag=0,ch11;
	system("cls");
	cout<<"========================STAFF SALARY GENERATION=======================\n\n";
	ifstream ifs("staffdata.txt");
	if(!ifs)
	{
		cout<<"\nFile doesn't exist";
		getch();
		exit(0);
	}
	ofstream ofs("temp1.txt");
	cout<<"\n\nEnter Staff ID to generate salary:";
	cin>>sid4;
	while(ifs.read((char*)&h,sizeof(hospital)))	
	{
		if(sid4==sid)
		{
			flag=1;
			cout<<"\n\nList of Staff:-";
			cout<<"\n1- Doctor";
			cout<<"\n2- Nurse";
			cout<<"\n3- Compounder";
			cout<<"\n4- Ward boy/girl";
			cout<<"\n\nEnter Your Choice(1-4):";
			cin>>ch11;
			switch(ch11)
			{
				case 1:
					h.s_doctor();
					break;
				case 2:
					h.s_nurse();
					break;
				case 3:
					h.s_compounder();
					break;
				case 4:
					h.s_ward();
					break;
				default:
				cout<<"\nInvalid Choice";	
			}
			ofs.write((char*)&h,sizeof(hospital));
		}
		else
		{
			ofs.write((char*)&h,sizeof(hospital));
		}
	}
	if(flag==0)
	{
		cout<<"\nStaff ID not found";
	}
	ifs.close();
	ofs.close();
	remove("staffdata.txt");
	rename("temp1.txt","staffdata.txt");
}

void hospital::s_doctor()
{
	int bsa=50000,hra,da,ta,tall,pf,it,tdud;
	system("cls");
	cout<<"====================SALARY GENERATION FOR DOCTOR=======================\n\n";
	cout<<"Staff ID:"<<sid;
	cout<<"\nStaff Name:"<<sn;
	cout<<"\n\n\nBasic Salary:\t"<<bsa;
	hra=bsa*0.10;
	cout<<"\nHRA(10%):\t"<<hra;
	da=bsa*0.08;
	cout<<"\nD.A(8%):\t"<<da;
	ta=bsa*0.05;
	cout<<"\nT.A(5%):\t"<<ta;
	tall=hra+da+ta;
	pf=bsa*0.06;
	cout<<"\nP.F(6%):\t"<<pf;
	it=bsa*0.10;
	cout<<"\nI.T(10%):\t"<<it;
	tdud=pf+it;
	nsalary=(bsa+tall)-tdud;
	cout<<"\n\nNet Salary:\t"<<nsalary;
}

void hospital::s_nurse()
{
	int bsa=30000,hra,da,ta,tall,pf,it,tdud;
	system("cls");
	cout<<"====================SALARY GENERATION FOR NURSE=======================\n\n";
	cout<<"Staff ID:"<<sid;
	cout<<"\nStaff Name:"<<sn;
	cout<<"\n\n\nBasic Salary:"<<bsa;
	hra=bsa*0.10;
	cout<<"\nHRA(10%):"<<hra;
	da=bsa*0.08;
	cout<<"\nD.A(8%):"<<da;
	ta=bsa*0.05;
	cout<<"\nT.A(5%):"<<ta;
	tall=hra+da+ta;
	pf=bsa*0.06;
	cout<<"\nP.F(6%):"<<pf;
	it=bsa*0.10;
	cout<<"\nI.T(10%):"<<it;
	tdud=pf+it;
	nsalary=(bsa+tall)-tdud;
	cout<<"\n\nNet Salary:"<<nsalary;
}

void hospital::s_compounder()
{
	int bsa=15000,hra,da,ta,tall,pf,it,tdud;
	system("cls");
	cout<<"====================SALARY GENERATION FOR COMPOUNDER=======================\n\n";
	cout<<"Staff ID:"<<sid;
	cout<<"\nStaff Name:"<<sn;
	cout<<"\n\n\nBasic Salary:"<<bsa;
	hra=bsa*0.10;
	cout<<"\nHRA(10%):"<<hra;
	da=bsa*0.08;
	cout<<"\nD.A(8%):"<<da;
	ta=bsa*0.05;
	cout<<"\nT.A(5%):"<<ta;
	tall=hra+da+ta;
	pf=bsa*0.06;
	cout<<"\nP.F(6%):"<<pf;
	it=bsa*0.10;
	cout<<"\nI.T(10%):"<<it;
	tdud=pf+it;
	nsalary=(bsa+tall)-tdud;
	cout<<"\n\nNet Salary:"<<nsalary;
}

void hospital::s_ward()
{
	int bsa=8000,hra,da,ta,tall,pf,it,tdud;
	system("cls");
	cout<<"====================SALARY GENERATION FOR WARD BOY/GIRL=======================\n\n";
	cout<<"Staff ID:"<<sid;
	cout<<"\nStaff Name:"<<sn;
	cout<<"\n\n\nBasic Salary:"<<bsa;
	hra=bsa*0.10;
	cout<<"\nHRA(10%):"<<hra;
	da=bsa*0.08;
	cout<<"\nD.A(8%):"<<da;
	ta=bsa*0.05;
	cout<<"\nT.A(5%):"<<ta;
	tall=hra+da+ta;
	pf=bsa*0.06;
	cout<<"\nP.F(6%):"<<pf;
	it=bsa*0.10;
	cout<<"\nI.T(10%):"<<it;
	tdud=pf+it;
	nsalary=(bsa+tall)-tdud;
	cout<<"\n\nNet Salary:"<<nsalary;
}

void hospital::about()
{
	system("cls");
	cout<<"\n\n\t\t\t\t================================ABOUT OUR HOSPITAL===============================\n";
	cout<<"\n\n\n\t\t\t\tHospital is a place where thye sick and the injured are taken for treatment.";
	cout<<"\n\t\t\t\tThe doctor and nurse are readily available there for admitting and attending";
	cout<<"\n\t\t\t\ton their patients.";
	cout<<"\n\t\t\t\tThe dedicated teams of doctor and nurse delivers the message of hope to their";
	cout<<"\n\t\t\t\tpatients in the hospital.";
	cout<<"\n\t\t\t\tAll over the world, hospital are built to treat and cure thousand of the sick";
	cout<<"\n\t\t\t\tpatients.";
	cout<<"\n\t\t\t\tAs these hospitals, there are very twell-equipped facilities and expert doctors.";
	cout<<"\n\t\t\t\tThese hospitals are considered the best places for effective treatment.";
	cout<<"\n\t\t\t\tThe doctors and nurse do their work with a dedication and maintains the pleasant";
	cout<<"\n\t\t\t\tatmosphere of the";
	cout<<"\n\t\t\t\thospital so that the patients feel comfortable and better.";
	cout<<"\n\n\n\t\t\t\tADDRESS:\n\t\t\t\tCommunity Welfare Society Hospital,Jagda";
	cout<<"\n\n\t\t\t\tPO: Rourkela 76902 Odisha.";
	cout<<"\n\n\t\t\t\tPhone:  0661 2473931\t\t\t\t\t  Email:cwsrkl@yahoo.com";
	cout<<"\n\t\t\t\t\t0826 0246020\t\t\t\t\t  Website:www.cwshospital.org";
}

int main()
{
	int ch,ch8,ch9,pass=1234,pass1;
	char choice;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\tEnter a Valid Password:";
	cin>>pass1;
	if(pass!=pass1)
	{
		cout<<"\n\t\t\t\t-----Invaild Password,Try Again Later-----";
		getch();
		exit(0);
	}
	else
	{
		cout<<"\n\n\n\t\t\t\t\t\t\tDesigned By:\n";
		cout<<"\n\t\t\t\t\t\t\tAnuja Satapathy\t\t(L3733)";
		cout<<"\n\t\t\t\t\t\t\tArati Behera\t\t(L3824)";
		cout<<"\n\t\t\t\t\t\t\tDoleswari Badaik\t(L3719)";
		cout<<"\n\t\t\t\t\t\t\tManashi Pattnaik\t(L3772)";
		cout<<"\n\t\t\t\t\t\t\tSanjana Sethi\t\t(L3734)";
		cout<<"\n\t\t\t\t\t\t\tSubhasmita Jena\t\t(L3727)";
		cout<<"\n\n\n\t\t\t\t\t\t\tUnder the Guidance of:";
		cout<<"\n\n\t\t\t\t\t\t\tKishan Sharma ";
		cout<<"\n\n\n\t\t\t\t\t\t\tPress Any key...";
		getch();
	do
	{
	system("cls");
	cout<<"==================WELCOME TO HOSPITAL MANAGEMENT SYSTEM================\n\n";
	cout<<"1- Patient Record\n";
	cout<<"2- Staff Record\n";
	cout<<"3- About Our Hospital\n";
	cout<<"4- Exit";
	cout<<"\n\nEnter Your Choice (1-4):";
	cin>>ch;
	switch (ch)
	{
		case 1:
			system("cls");
			cout<<"\n=======================PATIENT RECORD SECTION======================\n\n";
			cout<<"1- Add New Patient Record\n";
			cout<<"2- Search Patient Record\n";
			cout<<"3- Display All Patient Record\n";
			cout<<"4- Modify Patient Record\n";
			cout<<"5- Delete Patient Record\n";
			cout<<"6- Patient Bill Generation\n";
			cout<<"\n\nEnter Your Choice (1-6):";
			cin>>ch8;
			switch (ch8)
			{
				case 1:
					h.add();
					break;
				case 2:
					h.search();
					break;
				case 3:
					h.display();
					break;	
				case 4:
					h.modify();
					break;
				case 5:
					h.del();
					break;
				case 6:
					h.bill();
					break;
				case 7:
					cout<<"\n\nThank You for Using Our Project\n";
					exit(0);
					break;
				default:
					cout<<"\nInvalid Choice";	
			}	
			break;
		case 2:
			system("cls");
			cout<<"\n=======================STAFF RECORD SECTION======================\n\n";
			cout<<"1- Add New Staff Record\n";
			cout<<"2- Search Staff Record\n";
			cout<<"3- Display All Staff Record\n";
			cout<<"4- Modify Staff Record\n";
			cout<<"5- Delete Staff Record\n";
			cout<<"6- Staff Salary Generation\n";
			cout<<"\n\nEnter Your Choice (1-6):";
			cin>>ch9;
			switch (ch9)
			{
				case 1:
					h.staff_add();
					break;
				case 2:
					h.staff_search();
					break;
				case 3:
					h.staff_display();
					break;	
				case 4:
					h.staff_modify();
					break;
				case 5:
					h.staff_del();
					break;
				case 6:
					h.staff_salary();
					break;
				case 7:
					cout<<"\n\nThank You for Using Our Project\n";
					exit(0);
					break;
				default:
					cout<<"\nInvalid Choice";	
			}	
			break;
		case 3:
			h.about();
			break;
		case 4:
			cout<<"\n\nThank You for Using Our Project\n";
			exit(0);
			break;
		default:
			cout<<"\nInvalid Choice";	
	}
	cout<<"\n\n\n\n\n\t\t\t\tWant to continue again (Press 'Y'for Menu or Press'N'for Exit):";
	fflush(stdin);
	cin>>choice;
	}while(choice=='Y'||choice=='y');
	}	
}
