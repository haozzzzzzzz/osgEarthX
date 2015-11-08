#include <Basis/Units/UnitsType.h>
using namespace osgEarthXCore;

const osgEarth::Units UnitsType::INVALID_UNIT;

UnitsType::UnitsType( int iUnitsType )
{
	m_enumUnitsType = ( UnitsTypeEnum ) iUnitsType;
}

UnitsType::UnitsType( UnitsTypeEnum enumUnitsType )
{
	m_enumUnitsType = enumUnitsType;
}

UnitsType::operator const osgEarth::Units&()
{
	switch( m_enumUnitsType )
	{
	case CENTIMETERS:
		return osgEarth::Units::CENTIMETERS;
	case DATA_MILES:
		return osgEarth::Units::DATA_MILES;
	case FATHOMS:
		return osgEarth::Units::FATHOMS;
	case FEET:
		return osgEarth::Units::FEET;
	case FEET_US_SURVEY: 
		return osgEarth::Units::FEET_US_SURVEY;
	case INCHES:
		return osgEarth::Units::INCHES;
	case KILOFEET:
		return osgEarth::Units::KILOFEET;
	case KILOMETERS:
		return osgEarth::Units::KILOMETERS;
	case KILOYARDS:
		return osgEarth::Units::KILOYARDS;
	case METERS:
		return osgEarth::Units::METERS;
	case MILES:           // statute miles
		return osgEarth::Units::MILES;
	case MILLIMETERS:
		return osgEarth::Units::MILLIMETERS;
	case NAUTICAL_MILES:
		return osgEarth::Units::NAUTICAL_MILES;
	case YARDS:
		return osgEarth::Units::YARDS;

		// angular
	case BAM:
		return osgEarth::Units::BAM;
	case DEGREES:
		return osgEarth::Units::DEGREES;
	case NATO_MILS:
		return osgEarth::Units::NATO_MILS;
	case RADIANS:
		return osgEarth::Units::RADIANS;

		// temporal
	case DAYS:
		return osgEarth::Units::DAYS;
	case HOURS:
		return osgEarth::Units::HOURS;
	case MICROSECONDS:
		return osgEarth::Units::MICROSECONDS;
	case MILLISECONDS:
		return osgEarth::Units::MILLISECONDS;
	case MINUTES:
		return osgEarth::Units::MINUTES;
	case SECONDS:
		return osgEarth::Units::SECONDS;
	case WEEKS:
		return osgEarth::Units::WEEKS;

		// speed
	case FEET_PER_SECOND:
		return osgEarth::Units::FEET_PER_SECOND;

	case YARDS_PER_SECOND:
		return osgEarth::Units::YARDS_PER_SECOND;

	case METERS_PER_SECOND:
		return osgEarth::Units::METERS_PER_SECOND;
	case KILOMETERS_PER_SECOND:
		return osgEarth::Units::KILOMETERS_PER_SECOND;
	case KILOMETERS_PER_HOUR:
		return osgEarth::Units::KILOMETERS_PER_HOUR;

	case MILES_PER_HOUR:
		return osgEarth::Units::MILES_PER_HOUR;

	case DATA_MILES_PER_HOUR:
		return osgEarth::Units::DATA_MILES_PER_HOUR;
	case KNOTS:
		return osgEarth::Units::KNOTS;
	default:
		break;
	}

	return INVALID_UNIT;
}