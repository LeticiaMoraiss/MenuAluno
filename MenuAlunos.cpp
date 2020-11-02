#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream>
#include<string>
 
using namespace std;

 struct dadospessoais 
  {
  	char nome[99];
  	int matricula;
  	int faltas;
  	float nota[3];
	  	
  };

int main()
{
	struct dadospessoais dados[30];
	int menuprincipal;
	int altera, op, mat, v;
	int x=-1;  
	float media;
	int qtd_alunos=0,t=2;
	char aux_nome[99];
	
	while(menuprincipal!=6)
	{
		system("cls");
		cout<<"\n\t\t MENU PRINCIPAL  \n\n";
		cout<<"\t1 - Inclusao de um novo aluno  \n";
		cout<<"\t2 - Alteracao dos dados de um aluno  \n";
		cout<<"\t3 - Relacao dos alunos da turma  \n";
		cout<<"\t4 - Remover aluno  \n";
		cout<<"\t5 - Dados estatisticos da turma  \n";
		cout<<"\t6 - Sair  \n";
		
		cout<<"\n\tInforme uma opcao: ";
		cin>>menuprincipal;
		
		system("cls");
		
		
		switch(menuprincipal)
		{
//------------------------------------------------------------------- Opcao 1 -----------------------------------------------------------------------------------			
			
			case 1:
				
			   x++;
			    cout<<"\tInclusao de um novo aluno  \n";
			    fflush(stdin);
			    cout<<"\n Informe o nome do aluno: ";
			    gets(dados[x].nome);
			    cout<<"\n Informe a matricula do aluno: ";
			    do
				{
					cin>>dados[x].matricula;
				    
				    
				    if(dados[x].matricula<=0)
				    {
				    	cout<<"\n Erro matricula ivalida!!\n Informe um numero maior que 0: ";
				    	cin>>dados[x].matricula;
					}
					
					v=dados[x].matricula;
				
					for(int cont=0;cont<=x;cont++)
					{
						if(v==dados[x-1].matricula)
						{
					    	t=1;
						}
						else
						{
							t=0;
						}
					}
					
					if(t==1)
					{
						cout<<"\n Matricula informada ja cadastrada, favor informe outra: ";	
					}
					
				}while(t!=0);
				
			    cout<<"\n Informe a 1§ nota: ";
			    do
				{
					cin>>dados[x].nota[0];
	
					if(dados[x].nota[0]<0 || dados[x].nota[0]>10)
					{
						cout<<"\nValor invalido\n";
						cout<<"Informe um valor entre 0 e 10:  ";
					}
		
				}while(dados[x].nota[0]<0 || dados[x].nota[0]>10);

			    cout<<"\n Informe a 2§ nota: ";
			    do
				{
					cin>>dados[x].nota[1];
	
					if(dados[x].nota[1]<0 || dados[x].nota[1]>10)
					{
						cout<<"\nValor invalido\n";
						cout<<"Informe um valor entre 0 e 10:  ";
					}
		
				}while(dados[x].nota[1]<0 || dados[x].nota[1]>10);
				
			    cout<<"\n Informe a 3§ nota: ";
			    do
				{
					cin>>dados[x].nota[2];
	
					if(dados[x].nota[2]<0 || dados[x].nota[2]>10)
					{
						cout<<"\nValor invalido\n";
						cout<<"Informe um valor entre 0 e 10:  ";
					}
		
				}while(dados[x].nota[2]<0 || dados[x].nota[2]>10);
				
			    cout<<"\n Informe a quantidade de faltas: ";
			    do
			    {
			    	cin>>dados[x].faltas;
			    	if(dados[x].faltas<0 || dados[x].faltas>72)
			    	{
			    		cout<<"\nValor invalido\n";
						cout<<"Informe um valor entre 0 e 72: ";
					}
				}while(dados[x].faltas<0 || dados[x].faltas>72);
				
				cout<<"\n\n Aluno cadastrado com sucesso\n\n";
				
				qtd_alunos = x;
				
				system("pause");
				break;
				
//------------------------------------------------------------------- Opcao 2 -----------------------------------------------------------------------------------				
		
			case 2:
				cout<<"\tAlteracao dos dados de um aluno  \n";
				cout<<"\n Informe o numero da matricula para alteracao: ";
				cin>>mat;
			
				
				for(int cont=0;cont<=x;cont++)
				{
				    if(mat==dados[x].matricula)
					{
					   cout<<"\n Nome do aluno: "<< dados[x].nome;
					   cout<<"\n Matricula do aluno: "<< dados[x].matricula;
					   cout<<"\n 1§ Nota do aluno: "<< dados[x].nota[0];
					   cout<<"\n 2§ Nota do aluno: "<< dados[x].nota[1];
					   cout<<"\n 3§ Nota do aluno: "<< dados[x].nota[2];
					   cout<<"\n Faltas do aluno: "<< dados[x].faltas;
					   
					   
					    cout<<"\n\n\t\t ALTERACAO  \n\n";
						cout<<"\t1 - Alterar o Nome  \n";
						cout<<"\t2 - Alterar a 1§ Nota  \n";
						cout<<"\t3 - Alterar a 2§ Nota  \n";
						cout<<"\t4 - Alterar a 3§ Nota  \n";
						cout<<"\t5 - Alterar o numero de faltas  \n";
						cout<<"\t6 - Voltar  \n";
						
						cout<<"\n\tInforme uma opcao: ";
		                cin>>altera;
		                
		                fflush(stdin);
		                
		                switch(altera)
		                {
		                	case 1:
		                		cout<<"\n\t Informe o novo nome: ";
		                		gets(dados[x].nome);
		                		break;
		                	case 2:
		                		cout<<"\n Informe a 1§ nota: ";
							    do
								{
									cin>>dados[x].nota[0];
					
									if(dados[x].nota[0]<0 || dados[x].nota[0]>10)
									{
									cout<<"\nValor invalido\n";
									cout<<"Informe um valor entre 0 e 10:  ";
									}
						
								}while(dados[x].nota[0]<0 || dados[x].nota[0]>10);
								break;
								
							case 3:
							    cout<<"\n Informe a 2§ nota: ";
							    do
								{
									cin>>dados[x].nota[1];
					
									if(dados[x].nota[1]<0 || dados[x].nota[1]>10)
									{
									cout<<"\nValor invalido\n";
									cout<<"Informe um valor entre 0 e 10:  ";
									}
						
								}while(dados[x].nota[1]<0 || dados[x].nota[1]>10);
								break;  
								
						    case 4:
							    cout<<"\n Informe a 3§ nota: ";
							    do
								{
									cin>>dados[x].nota[2];
					
									if(dados[x].nota[2]<0 || dados[x].nota[2]>10)
									{
										cout<<"\nValor invalido\n";
										cout<<"Informe um valor entre 0 e 10:  ";
									}
						
								}while(dados[x].nota[2]<0 || dados[x].nota[2]>10);
							   	break; 
							   	
							case 5:
							    cout<<"\n Informe a quantidade de faltas: ";
							    do
							    {
							    	cin>>dados[x].faltas;
							    	if(dados[x].faltas<0 || dados[x].faltas>72)
							    	{
							    		cout<<"\nValor invalido\n";
										cout<<"Informe um valor entre 0 e 72: ";
									}
								}while(dados[x].faltas<0 || dados[x].faltas>72);
						   break;   	
						}
						break;
					}	
				}
				
		  system("pause");
		  break;
				
//------------------------------------------------------------------- Opcao 3 -----------------------------------------------------------------------------------
		
			case 3: 
			    cout<<"\tRelacao dos alunos da turma  \n";
				cout<<"\n1 - Listar todos ";
				cout<<"\n2 - Listar por Aluno ";
				cout<<"\nEscolha uma das opcoes: ";
				cin>>op;
				
				switch(op)
				{
					case 1:
						for(int cont=0;cont<=x;cont++)
						{
							media=0;
							
							media = (dados[cont].nota[0]+dados[cont].nota[1]+dados[cont].nota[2]) / 3;
						    
							cout<<"\n------------------------------------------------------------------------";  
							cout<<"\nMatricula:		"<<dados[cont].matricula;
							cout<<"\nNome:			"<<dados[cont].nome; 
							cout<<"\nFaltas:			"<<dados[cont].faltas;
							cout<<"\nMedia:			"<<media;
							if((media>=6)&&(dados[cont].faltas<=18))
							{
								cout<<"\nSituacao:		Aprovado\n";
							}
							else
							if(media<6)
							{
								cout<<"\nSituacao:		Reprovado por nota\n";	
							}			                 	 
							else
							if(dados[cont].faltas>18)
							{
								cout<<"\nSituacao:		Reprovado por frequencia\n";
							}
						}
						cout<<"\n------------------------------------------------------------------------\n";
						
					    system("pause");
						break;
						
					case 2:
						
					 cout<< "Informe a matricula do aluno: ";
					 cin>> mat;
					 media = 0;
					 
					 for(int cont=0;cont<=x;cont++)
					 {
					 	if(dados[cont].matricula==mat)
					 	{
					 		media = (dados[cont].nota[0]+dados[cont].nota[1]+dados[cont].nota[2]) / 3;
					 	    t=1;
							cout<<"\nMatricula:		"<<dados[cont].matricula;
							cout<<"\nNome:			"<<dados[cont].nome; 
							cout<<"\nFaltas:			"<<dados[cont].faltas;
							cout<<"\nMedia:			"<<media; 
							if((media>=6)&&(dados[cont].faltas<=18))
							{
								cout<<"\nSituacao:		Aprovado\n";
							}
							else
							if(media<6)
							{
								cout<<"\nSituacao:		Reprovado por nota\n";	
							}			                 	 
							else
							if(dados[cont].faltas>18)
							{
								cout<<"\nSituacao:		Reprovado por frequencia\n";
							}	
						}
					
					 }
			
					    system("pause");
						break;
				}
			break;	
				
//------------------------------------------------------------------- Opcao 4 -----------------------------------------------------------------------------------			
			
			case 4:
				cout<<"\tRemover aluno  \n";
	
				cout<<"\n Informe a matricula para remocao: ";
				cin>>mat;
				
				for(int cont=0;cont<=x;cont++)
				{
					if(mat==dados[cont].matricula)
					{
						int aux=x;
					   cout<<"\n Deseja realmente excluir os seguintes dados?";
			
					   cout<<"\n Nome do aluno: "<< dados[cont].nome;
					   cout<<"\n Matricula do aluno: "<< dados[cont].matricula;
					   cout<<"\n 1§ Nota do aluno: "<< dados[cont].nota[0];
					   cout<<"\n 2§ Nota do aluno: "<< dados[cont].nota[1];
					   cout<<"\n 3§ Nota do aluno: "<< dados[cont].nota[2];
					   cout<<"\n Faltas do aluno: "<< dados[cont].faltas;
					   
					   cout<<"\n\nEscolha uma das opcoes: ";
					   cout<<"\n 1 - Sim";
					   cout<<"\n 2 - Nao\n";
					   cin>>op;
					   
					   switch(op)
					   {
					   	    case 1:
					   	  	for (int cont=0; cont<=x;cont++)
					   	  	{
					   	  		strcpy(dados[aux].nome,dados[aux-1].nome);
					   	  		dados[aux].matricula=dados[aux-1].matricula;
					   	  		dados[aux].nota[0]=dados[aux-1].nota[0];
					   	  		dados[aux].nota[1]=dados[aux-1].nota[1];
					   	  		dados[aux].nota[2]=dados[aux-1].nota[2];
					   	  		dados[aux].faltas=dados[aux-1].faltas;
							}
							system("pause");
							break;
							
							case 2:
								break;
					   }  	
					}
					
					else
					{
						t=0;
					}
				}
				x=x-1;
				cout<<"Aluno excluido com sucesso.\n\n";
				
				if(t=0)
				{
					cout<<"\n Matricula nao encontrada\n";
				}
				
				system("pause");
				break;
				
//------------------------------------------------------------------- Opcao 5 -----------------------------------------------------------------------------------			
		
			case 5:
				cout<<"\tDados estatisticos da turma  \n";
				system("pause");
				break;
				
//------------------------------------------------------------------- Opcao 6 -----------------------------------------------------------------------------------			
			
			case 6:
				return 0;
			    break;
				
			default:
			    cout<<"\n OPCAO INVALIDA..  \n\n\n";
			    system("pause");
			    break;
	   		    
		}
	}
		
getch();	
}
