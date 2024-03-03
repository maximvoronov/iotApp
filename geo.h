#ifndef GEO_H
#define GEO_H
#include <QString>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionValidator>

class Geo
{
public:
    Geo();

    double getLongitude() const;
    double getLatitude() const;

    void setLongitude(double longitude);
    void setLatitude(double latitude);

private:
    double longitude, latitude;
};
#endif // GEO_H
