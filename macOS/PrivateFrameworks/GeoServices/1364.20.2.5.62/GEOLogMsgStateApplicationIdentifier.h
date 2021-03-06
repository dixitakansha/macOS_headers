//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying>
{
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    BOOL _appDarkMode;
    struct {
        unsigned int appDarkMode:1;
    } _has;
}

@property(nonatomic) BOOL appDarkMode; // @synthesize appDarkMode=_appDarkMode;
@property(retain, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAppDarkMode;
@property(readonly, nonatomic) BOOL hasAppMinorVersion;
@property(readonly, nonatomic) BOOL hasAppMajorVersion;
@property(readonly, nonatomic) BOOL hasAppIdentifier;

@end

