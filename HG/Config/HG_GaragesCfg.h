/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available garages
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL or mixed
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			allowedTypes - ARRAY OF STRINGS - Allowed vehicle types to be retrieved from the garage, can be Car/Truck/Tank/Air/Ship/Submarine or mixed
			spawnPoints - ARRAY OF ARRAYS - Spawn positions (markers/positions)
			|- 0 - STRING - Display name in the dialog
			|- 1 - ARRAY OF MIXED - Markers/positions
			storePoint - STRING - Point (marker) where the vehicle should be placed to be able to store it, if left empty it will detect the nearest owned vehicle inside a 8m radius around the player
		};
	};
*/

class HG_DefaultGarage // HG_DefaultGarage is just a placeholder for testing purposes, you can delete it completely and make your own
{
    allowedTypes[] = {"Car","Truck","Tank","Air"};
	spawnPoints[] = 
	{
		{"Spawn 1",{"garage_spawn_1"}},
		{"Spawn 2",{"garage_spawn_2","garage_spawn_3"}}
	};
	storePoint = "garage_store";
};
