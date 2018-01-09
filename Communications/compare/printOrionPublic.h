// printOrionPublic.h was generated by ProtoGen version 2.11.b

#ifndef _PRINTORIONPUBLIC_H
#define _PRINTORIONPUBLIC_H

#include "OrionPublicPacket.h"
#include <QString>

//! Generate a string that describes the contents of a OrionFlirSettings_t structure
QString textPrintOrionFlirSettings_t(QString prename, const OrionFlirSettings_t* user);

//! Generate a string that describes the contents of a OrionFlirSettings packet
QString textPrintOrionFlirSettingsPacket(const void* pkt);

//! Generate a string that describes the contents of a OrionAptinaSettings_t structure
QString textPrintOrionAptinaSettings_t(QString prename, const OrionAptinaSettings_t* user);

//! Generate a string that describes the contents of a OrionAptinaSettings packet
QString textPrintOrionAptinaSettingsPacket(const void* pkt);

//! Generate a string that describes the contents of a OrionZafiroSettings_t structure
QString textPrintOrionZafiroSettings_t(QString prename, const OrionZafiroSettings_t* user);

//! Generate a string that describes the contents of a OrionZafiroSettings packet
QString textPrintOrionZafiroSettingsPacket(const void* pkt);

//! Generate a string that describes the contents of a OrionHitachiSettings_t structure
QString textPrintOrionHitachiSettings_t(QString prename, const OrionHitachiSettings_t* user);

//! Generate a string that describes the contents of a OrionHitachiSettings packet
QString textPrintOrionHitachiSettingsPacket(const void* pkt);

//! Generate a string that describes the contents of a OrionSonySettings_t structure
QString textPrintOrionSonySettings_t(QString prename, const OrionSonySettings_t* user);

//! Generate a string that describes the contents of a OrionSonySettings packet
QString textPrintOrionSonySettingsPacket(const void* pkt);

//! Generate a string that describes the contents of a OrionUartConfig_t structure
QString textPrintOrionUartConfig_t(QString prename, const OrionUartConfig_t* user);

//! Generate a string that describes the contents of a OrionUartConfig packet
QString textPrintOrionUartConfigPacket(const void* pkt);

//! Generate a string that describes the contents of a OrionLimitsData_t structure
QString textPrintOrionLimitsData_t(QString prename, const OrionLimitsData_t* user);

//! Generate a string that describes the contents of a OrionLimitsData packet
QString textPrintOrionLimitsDataPacket(const void* pkt);

//! Generate a string that describes the contents of a InsOptions_t structure
QString textPrintInsOptions_t(QString prename, const InsOptions_t* user);

//! Generate a string that describes the contents of a InsOptions packet
QString textPrintInsOptionsPacket(const void* pkt);

//! Generate a string that describes the contents of a OrionNetworkSettings_t structure
QString textPrintOrionNetworkSettings_t(QString prename, const OrionNetworkSettings_t* user);

//! Generate a string that describes the contents of a OrionNetworkSettings packet
QString textPrintOrionNetworkSettingsPacket(const void* pkt);

//! Generate a string that describes the contents of a OrionNetworkVideo_t structure
QString textPrintOrionNetworkVideo_t(QString prename, const OrionNetworkVideo_t* user);

//! Generate a string that describes the contents of a OrionNetworkVideo packet
QString textPrintOrionNetworkVideoPacket(const void* pkt);

//! Generate a string that describes the contents of a OrionCameras_t structure
QString textPrintOrionCameras_t(QString prename, const OrionCameras_t* user);

//! Generate a string that describes the contents of a OrionCameras packet
QString textPrintOrionCamerasPacket(const void* pkt);

#endif
