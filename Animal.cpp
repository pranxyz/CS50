#include <iostream>

public class Animal{

	private String name;
	
	public void setName(String name){
		this.name = name;
	}
	
	public void printName(){
		System.out.println("My name is: " + name);
	}
	
	public static void main(String[] args){
		Animal animalOne = new Animal();
		animalOne.setName("Betty");
		
		Animal animalTwo = new Animal();
		animalTwo.setName("Veronica");
		
		animalOne.printName();
		animalTwo.printName();
	}
}