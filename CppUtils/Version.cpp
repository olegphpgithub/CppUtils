#include "StdAfx.h"
#include "Version.h"

Version::Version(LPCTSTR lptszVersion)
{
    setVersion(lptszVersion);
}

void Version::setVersion(LPCTSTR lptszVersion)
{
    _stscanf_s(lptszVersion, TEXT("%d.%d.%d.%d"), &major, &minor, &revision, &build);
}

bool operator<(const Version &leftVersion, const Version &rightVersion)
{
    if(leftVersion.major < rightVersion.major)
        return true;
    if(leftVersion.minor < rightVersion.minor)
        return true;
    if(leftVersion.revision < rightVersion.revision)
        return true;
    if(leftVersion.build < rightVersion.build)
        return true;
    return false;
}

bool operator>(const Version &leftVersion, const Version &rightVersion)
{
    return rightVersion < leftVersion;
}

