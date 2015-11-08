/**
	@brief type enum of Units
	@author Hao Luo
	@date 2015/10/29
*/

#ifndef OSGEARTHX_CORE_UNITS_TYPE_H
#define OSGEARTHX_CORE_UNITS_TYPE_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osgEarth/Units>

namespace osgEarthXCore
{
	class OSGEARTHX_CORE_EXPORT UnitsType
	{
	public:
		static const osgEarth::Units INVALID_UNIT;

		enum UnitsTypeEnum
		{
			CENTIMETERS = 0,
			DATA_MILES,
			FATHOMS,
			FEET,
			FEET_US_SURVEY,  // http://www.wsdot.wa.gov/reference/metrics/foottometer.htm
			INCHES,
			KILOFEET,
			KILOMETERS,
			KILOYARDS,
			METERS,
			MILES,           // statute miles
			MILLIMETERS,
			NAUTICAL_MILES,
			YARDS,

			// angular
			BAM,
			DEGREES,
			NATO_MILS, // http://www.convertworld.com/en/angle/Mil+(NATO).html
			RADIANS,

			// temporal
			DAYS,
			HOURS,
			MICROSECONDS,
			MILLISECONDS,
			MINUTES,
			SECONDS,
			WEEKS,

			// speed
			FEET_PER_SECOND,
			YARDS_PER_SECOND,
			METERS_PER_SECOND,
			KILOMETERS_PER_SECOND,
			KILOMETERS_PER_HOUR,
			MILES_PER_HOUR,
			DATA_MILES_PER_HOUR,
			KNOTS
		};

		UnitsType( int iUnitsType );
		UnitsType( UnitsTypeEnum enumUnitsType );//从枚举构造对象
		operator const osgEarth::Units&();//UnitsType对象转换成osgEarth::Units

	protected:
		UnitsTypeEnum m_enumUnitsType;
		
	private:
	};
}

#endif