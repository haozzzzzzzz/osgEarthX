/**
	@brief Unit class type
	@author Hao Luo
	@date 2015/10/29
*/
#ifndef OSGEARTHX_COM_UNITS_Class_TYPE_IDL_H
#define OSGEARTHX_COM_UNITS_Class_TYPE_IDL_H 1

[
	uuid(378c4086-d41c-4e2f-a663-a005a7b75d2a),
	helpstring( "Units Class Type" )
]
typedef enum UnitClassType
{
	UNIT_CLASS_LINEAR, 
	UNIT_CLASS_ANGULAR, 
	UNIT_CLASS_TEMPORAL, 
	UNIT_CLASS_SPEED, 
	UNIT_CLASS_SCREEN_SIZE,
}UnitClassType;

#endif