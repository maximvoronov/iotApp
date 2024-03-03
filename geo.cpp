#include "geo.h"

Geo::Geo() {

}

double Geo::getLongitude() const{
    return this->longitude;
}
double Geo::getLatitude() const{
    return this->latitude;
}

void Geo::setLongitude(double longitude){
    this->longitude = longitude;
}

void Geo::setLatitude(double latitude){
    this->latitude = latitude;
}

/*
double Geo::correctLatitude(QString _latitude) noexcept {
    double latitude, minutes, seconds;
    bool ok = true;

    QRegularExpression regExp("[0-9]{2}.[0-9]{1,6}");
    QRegularExpressionMatch match = regExp.match(_latitude);

    if(!match.hasMatch())
    {
        //Spline/Float once message of error
        //putMessage(IOT::GEO_STATE_ERROR);
    }
    //putMessage(IOT::GEO_STATE_OK);

    latitude = _latitude.toDouble(&ok);

    return latitude;

}
*/

