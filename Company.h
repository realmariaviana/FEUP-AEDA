#ifndef UNTITLED_COMPANY_H
#define UNTITLED_COMPANY_H

#include <iomanip>
#include <math.h>
#include <String>
#include "Pharmacy.h"
#include "Product.h"
#include "Recipe.h"
#include "Sales.h"
#include "People.h"
#include "BST.h"
#include <set>
#include <unordered_set>

using namespace std;

struct EmployeeEq {
	bool operator() (const Employee & e1, const Employee &e2)const {
		if (e1.getTaxNumber() == e2.getTaxNumber() && e1.getTaxNumber() == e2.getTaxNumber())
			return true;
		else
			return false;
	}
};

struct EmployeeHash {
	int operator() (const Employee &e1) const{
		return e1.getTaxNumber();
	}
};

typedef unordered_set<Employee, EmployeeHash, EmployeeEq> tabHU;
typedef unordered_set<Employee, EmployeeHash, EmployeeEq >::iterator iteratorH;

class Company {
private:
	vector<Pharmacy *> pharmacies;
	vector<Employee *> employees;
	vector<Product *> products;
	vector<Recipe *> recipes;
	vector<Sales *> sales;
	BST<Client> clients;
    tabHU formerEmployees;
public:

    /**
    	 * @brief Uses hash so it can fire employees
    	 */
    void fireEmployee();

    /**
    * @brief Uses hash so it can hire back former employees
    */
    void hireBack();
	/**
	 * Constructor of class Company.
	 */
	Company():clients( Client()) {};

	/**
	 * @return vector Pharmacies
	 */
	vector<Pharmacy *> getPharmacies() {
		return pharmacies;
	}

	/**
	* @return clients
	*/
	BST<Client > getClients() {
		return clients;
	}

	/**
	 * @brief Opens Pharmacy File.
	 */
	void openPharmacyFile();

	/**
	 * @brief Opens Employees File.
	 */
	void openEmployeesFile();

	/**
	 * @brief Opens Clients File.
	 */
	void openClientsFile();

	/**
	 * @brief Opens Products File.
	 */
	void openProductsFile();

	/**
	 * @brief Opens Recipes File.
	 */
	void openRecipesFile();

	/**
	 * @brief Opens Recipes File.
	 */
	void openSalesFile();

	/**
	 * @brief Displays the information about all pharmacies.
	 */
	void displayPharmacies();

	/**
	 * @brief Displays the information about all employees.
	 */
	void displayEmployees();

	/**
	 * @brief Displays the information about all clients.
	 */
	void displayClients();

	/**
	 * @brief Displays the information about all products.
	 */
	void displayProducts();

	/**
	 * @brief Displays the information about all recipes.
	 */
	void displayRecipes();

	/**
	 * @brief Displays the information about all recipes.
	 */
	void displaySales();

	/**
	 * @brief Search pharmacy by name and displays its information.
	 */
	void searchPharmacyName();

	/**
	 * @brief Search pharmacy by address and displays its information.
	 */
	void searchAddress();

	/**
	 * @brief Search pharmacy by manager and displays its information.
	 */
	void searchManager();

	/**
	 * @brief Search pharmacy by employee and displays its information.
	 */
	void searchEmployees();

	/**
	 * @brief Search pharmacy by client and displays its information.
	 *
	 */
	void searchClients();

	/**
	 * @brief Verifies if pharmacy with certain name exist.
	 * @param name
	 * @return pos of pharmacie in Pharmacies' vector if pharmacy with name exists, -1 otherwise
	 */
	int pharmacyExists(string name);

	/**
	 * @brief Verifies if employee with certain name exist.
	 * @param name
	 * @return pos of employee in employees' vector if employee with name exists, -1 otherwise
	 */
	int employeeExists(string name);

	/**
	 * @brief Verifies if client with certain name exist.
	 * @param name
	 * @return pos of client in Clients' vector if client with name exists, -1 otherwise
	 */
	int clientExists(string name);

	/**
	 * @brief Verifies if product with certain code exist.
	 * @param code
	 * @return pos of product in Products' vector if product with code exists, -1 otherwise
	 */
	int productExists(string code);

	/**
	 * @brief Verifies if product with certain code exist.
	 * @param code
	 * @return pos of product in Products' vector if product with code exists, -1 otherwise
	 */

	int recipeExists(int code);

	/**
	 * @brief Verifies if product with certain code exist.
	 * @param code
	 * @return pos of product in Products' vector if product with code exists, -1 otherwise
	 */
	int salesExists(int code);

	/**
	 * @brief Adds pharmacy to Pharmacies' vector with user's input information.
	 */
	void addPharmacy();

	/**
	 * @brief Adds employee to Employees' vector with user's input information.
	 */
	void addEmployee();

	/**
	 * @brief Adds client to Clients' vector with user's input information.
	 */
	void addClient();

	/**
	 * @brief Adds product to Products' vector with user's input information.
	 */
	void addProducts();

	/**
	 * @brief Adds recipe to Recipes' vector with user's input information.
	 */
	void addRecipe();

	/**
	 * @brief Adds sale to Sales' vector with user's input information.
	 */
	void addSale();

	/**
	 * @brief Removes pharmacy to Pharmacies' vector with user's input information.
	 */
	void removePharmacy();

	/**
	 * @brief Removes employee to Employees' vector with user's input information.
	 */
	void removeEmployee();

	/**
	 * @brief Removes client to Clients' vector with user's input information.
	 */
	void removeClient();

	/**
	 * @brief Removes product to Products' vector with user's input information.
	 */
	void removeProduct();

	/**
	 * @brief Removes recipe to Recipes' vector with user's input information.
	 */
	void removeRecipe();

	/**
	 * @brief Removes sale to Sales' vector with user's input information.
	 */
	void removeSale();

	/**
	 * @brief Removes All pharmacy to Pharmacies'.
	 */
	void removeAllPharmacys();

	/**
	 * @brief Removes All employee to Employees'.
	 */
	void removeAllEmployees();

	/**
	 * @brief Removes All client to Clients'.
	 */
	void removeAllClients();

	/**
	 * @brief Removes All product to Products'.
	 */
	void removeAllProducts();

	/**
	 * @brief Removes All recipe to Recipes'.
	 */
	void removeAllRecipes();

	/**
	 * @brief Removes All sale to Sales'.
	 */
	void removeAllSales();

	/**
	 * @brief Displays information about 2 pharmacies side by side.
	 * @param 1st Pharmacy
	 * @param 2nd Pharmacy
	 */
	void comparePharmacies(Pharmacy *p1, Pharmacy *p2);

	/**
	 * @brief Updates the file containing the information about the pharmacies according to the changes made in the program.
	 */
	void updatePharmacyFile();

	/**
	 * @brief Updates the file containing the information about the employees according to the changes made in the program.
	 */
	void updateEmployeeFile();

	/**
	 * @brief Updates the file containing the information about the clients according to the changes made in the program.
	 */
	void updateClientFile();

	/**
	 * @brief Updates the file containing the information about the products according to the changes made in the program.
	 */
	void updateProductFile();

	/**
	 * @brief Updates the file containing the information about the recipes according to the changes made in the program.
	 */
	void updateRecipeFile();

	/**
	 * @brief Updates the file containing the information about the sales according to the changes made in the program.
	 */
	void updateSalesFile();

	 /**
	    	*	@return returns former employees
	    	*/
	    	tabHU getFormer() const { return formerEmployees; };
};

/**
 * @brief Sorts pharmacies vector by name's alphabetic order.
 * @param s1
 * @param s2
 * @return
 */
bool orderByNamePharmacy(Pharmacy *s1, Pharmacy *s2);
bool orderByNameAddress(Pharmacy *p1, Pharmacy *p2);
bool orderByNameEmployee(Employee *p1, Employee *p2);
bool orderByNameManager(Pharmacy *p1, Pharmacy *p2);
bool orderByNameClient(Client *p1, Client *p2);
bool orderByCodeProduct(Product *p1, Product *p2);
bool orderByRecipeNumber(Recipe *p1, Recipe *p2);
bool orderByDate(Sales *p1, Sales *p2);

#endif //UNTITLED_COMPANY_H
