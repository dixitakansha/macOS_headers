//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    BOOL _enabled;
    BOOL _toggleEnabled;
    BOOL _allowCaptiveWebSheet;
    BOOL _allowAllCaptiveNetworkPlugins;
    NSDictionary *_interfaceProtocolMapping;
    NSString *_activeInterfaceProtocolKey;
    NSDictionary *_serviceExceptions;
    NSDictionary *_allowedCaptiveNetworkPlugins;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *allowedCaptiveNetworkPlugins; // @synthesize allowedCaptiveNetworkPlugins=_allowedCaptiveNetworkPlugins;
@property(copy) NSDictionary *serviceExceptions; // @synthesize serviceExceptions=_serviceExceptions;
@property(copy) NSString *activeInterfaceProtocolKey; // @synthesize activeInterfaceProtocolKey=_activeInterfaceProtocolKey;
@property(copy) NSDictionary *interfaceProtocolMapping; // @synthesize interfaceProtocolMapping=_interfaceProtocolMapping;
@property(getter=isAllowAllCaptiveNetworkPlugins) BOOL allowAllCaptiveNetworkPlugins; // @synthesize allowAllCaptiveNetworkPlugins=_allowAllCaptiveNetworkPlugins;
@property(getter=isAllowCaptiveWebSheet) BOOL allowCaptiveWebSheet; // @synthesize allowCaptiveWebSheet=_allowCaptiveWebSheet;
@property(getter=isToggleEnabled) BOOL toggleEnabled; // @synthesize toggleEnabled=_toggleEnabled;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

