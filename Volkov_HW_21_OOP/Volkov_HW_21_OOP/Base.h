#pragma once
class Base
{
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;
public:
	static void Init(); // static method init
	static void Show(); // static method show
	// static accessors
	static int Get_People_On_Base();
	static void Set_People_On_Base(int value_people_on_base);
	static int Get_Vehicles_On_Base();
	static void Set_Vehicles_On_Base(int value_vehicles_on_base);
	static double Get_Petrol_On_Base();
	static void Set_Petrol_On_Base(double value_petrol_on_base);
	static double Get_Goods_On_Base();
	static void Set_Goods_On_Base(double value_goods_on_base);
};
