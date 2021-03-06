//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSSecureCoding-Protocol.h>

@interface DMFInstalledApplicationInstallProgress : NSObject <NSSecureCoding>
{
    unsigned long long _state;
    unsigned long long _phase;
    double _fractionCompleted;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

