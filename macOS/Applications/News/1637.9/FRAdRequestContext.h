//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FRAdRequestContext : NSObject
{
    BOOL _draft;
    BOOL _windowIsSplitScreen;
    BOOL _contentBackgroundInViewWhenRequested;
    NSArray *_timedOutAdIdentifiers;
    NSArray *_activeAdIdentifiers;
    unsigned long long _advertisementType;
    unsigned long long _subscriptionType;
    long long _creativeType;
    NSString *_adOpportunityID;
}

@property(copy, nonatomic) NSString *adOpportunityID; // @synthesize adOpportunityID=_adOpportunityID;
@property(nonatomic) long long creativeType; // @synthesize creativeType=_creativeType;
@property(nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(nonatomic) unsigned long long advertisementType; // @synthesize advertisementType=_advertisementType;
@property(copy, nonatomic) NSArray *activeAdIdentifiers; // @synthesize activeAdIdentifiers=_activeAdIdentifiers;
@property(copy, nonatomic) NSArray *timedOutAdIdentifiers; // @synthesize timedOutAdIdentifiers=_timedOutAdIdentifiers;
@property(nonatomic) BOOL contentBackgroundInViewWhenRequested; // @synthesize contentBackgroundInViewWhenRequested=_contentBackgroundInViewWhenRequested;
@property(nonatomic) BOOL windowIsSplitScreen; // @synthesize windowIsSplitScreen=_windowIsSplitScreen;
@property(nonatomic) BOOL draft; // @synthesize draft=_draft;
- (void).cxx_destruct;
- (id)initWithCreativeType:(long long)arg1 advertisementType:(unsigned long long)arg2;
- (id)init;

@end

