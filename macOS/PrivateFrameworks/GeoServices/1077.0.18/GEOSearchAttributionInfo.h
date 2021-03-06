//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    unsigned int _version;
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
    NSString *_displayName;
    NSString *_webBaseActionURL;
    NSArray *_attributionApps;
    unsigned int _attributionRequirementsMask;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *webBaseActionURL; // @synthesize webBaseActionURL=_webBaseActionURL;
@property(nonatomic) unsigned int requirementsMask; // @synthesize requirementsMask=_attributionRequirementsMask;
@property(retain, nonatomic) NSArray *attributionApps; // @synthesize attributionApps=_attributionApps;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;
- (void)addLogoPath:(id)arg1;
- (id)snippetLogoPathForScale:(double)arg1;
- (id)logoPathForScale:(double)arg1;
- (BOOL)hasAttributionRequirement:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)supportsActionURLs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;

@end

