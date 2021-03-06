//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol HMDAccessorySymptomsDelegate;

@interface HMDSymptomContainer : NSObject
{
    id <HMDAccessorySymptomsDelegate> _delegate;
    NSSet *_broadcastedSymptoms;
    NSSet *_localSymptoms;
}

@property(copy, nonatomic) NSSet *localSymptoms; // @synthesize localSymptoms=_localSymptoms;
@property(copy, nonatomic) NSSet *broadcastedSymptoms; // @synthesize broadcastedSymptoms=_broadcastedSymptoms;
@property(nonatomic) __weak id <HMDAccessorySymptomsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)init;

@end

