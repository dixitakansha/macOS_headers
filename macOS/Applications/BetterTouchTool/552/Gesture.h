//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class KeySequence, NSData, NSNumber, NSOrderedSet, NSSet, NSString, Trait;

__attribute__((visibility("hidden")))
@interface Gesture : NSManagedObject
{
}

- (void)prepareForDeletion;

// Remaining properties
@property(retain, nonatomic) NSNumber *action; // @dynamic action;
@property(retain, nonatomic) NSString *additionalInteger; // @dynamic additionalInteger;
@property(retain, nonatomic) NSString *additionalString; // @dynamic additionalString;
@property(retain, nonatomic) NSSet *children; // @dynamic children;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSOrderedSet *files; // @dynamic files;
@property(retain, nonatomic) NSString *gestureConfig; // @dynamic gestureConfig;
@property(retain, nonatomic) NSNumber *gestureType; // @dynamic gestureType;
@property(retain, nonatomic) NSSet *gestures; // @dynamic gestures;
@property(retain, nonatomic) NSData *icondata; // @dynamic icondata;
@property(retain, nonatomic) NSNumber *isEnabled; // @dynamic isEnabled;
@property(retain, nonatomic) NSNumber *isTouchpad; // @dynamic isTouchpad;
@property(retain, nonatomic) KeySequence *keySequence; // @dynamic keySequence;
@property(retain, nonatomic) NSNumber *keycode; // @dynamic keycode;
@property(retain, nonatomic) NSString *launchPath; // @dynamic launchPath;
@property(retain, nonatomic) NSNumber *locked; // @dynamic locked;
@property(retain, nonatomic) NSNumber *modifierKeys; // @dynamic modifierKeys;
@property(retain, nonatomic) NSNumber *order; // @dynamic order;
@property(retain, nonatomic) Gesture *parent; // @dynamic parent;
@property(retain, nonatomic) NSNumber *repeatRate; // @dynamic repeatRate;
@property(retain, nonatomic) NSString *shortcut; // @dynamic shortcut;
@property(retain, nonatomic) Trait *trait; // @dynamic trait;
@property(retain, nonatomic) NSNumber *triggerOnDown; // @dynamic triggerOnDown;

@end

