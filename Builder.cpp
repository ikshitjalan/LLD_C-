#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Pizza {
  private:
    string dough;
    string sauce;
    string topping;
  public:
    void setDough(string dough){
      this->dough = dough;
    }

    void setSauce(string sauce){
      this->sauce = sauce;
    }

    void setTopping(string topping){
      this->topping = topping;
    }

    string getDough(){
      return this->dough;
    }

    string getSauce(){
      return this->sauce;
    }

    string getTopping(){
      return this->topping;
    }

    void getPizza(){
      cout<<"Pizza contains: " + this->dough + this->sauce + this->topping<<" ";
    }
};

// ABSTRACT BUILDER
class PizzaBuilder {
  public:
    Pizza* pizza;

  public:
    void receivePizza(){
      pizza->getPizza();
    }

    void buildPizza(){
      this->pizza = new Pizza();
    }

    virtual void buildDough() = 0;
    virtual void buildSauce() = 0;
    virtual void buildTopping() = 0;
  
};

class HawaianPizzaBuilder : public PizzaBuilder{
  
  virtual void buildDough() {
		pizza->setDough("cross");
	}
	
  virtual void buildSauce(){
		pizza->setSauce("mild");
	}

	virtual void buildTopping(){
		pizza->setTopping("ham+pineapple");
	}
};

class SpicyPizzaBuilder : public PizzaBuilder{
  
  virtual void buildDough(){
		pizza->setDough("pan baked");
	}

	virtual void buildSauce(){
		pizza->setSauce("hot");
	}
	
  virtual void buildTopping(){
		pizza->setTopping("pepperoni+salami");
	}
};

class Cook {
  private:
  PizzaBuilder* pizzaBuilder;
  public:
  void buildPizza(PizzaBuilder* pb){
    pizzaBuilder = pb;
    pizzaBuilder->buildPizza();
    pizzaBuilder->buildSauce();
    pizzaBuilder->buildTopping();
  }  

  void openPizza(){
    pizzaBuilder->receivePizza();
  }
};


int main() {
  Cook* cook;
  SpicyPizzaBuilder* spicyPizzaBuilder;
  HawaianPizzaBuilder* hawaianPizzaBuilder;
  cook->buildPizza(spicyPizzaBuilder);
  cook->openPizza();
  cook->buildPizza(hawaianPizzaBuilder);
  cook->openPizza();
  return 0;
}