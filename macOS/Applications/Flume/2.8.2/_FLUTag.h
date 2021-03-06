//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUManagedObject.h"

@class FLUTagID, FLUUser, NSDate, NSNumber, NSSet, NSString;

@interface _FLUTag : FLUManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)messagesSet;
- (id)mediaSet;
- (id)commentsSet;
- (void)setPrimitiveSearchPositionValue:(unsigned long long)arg1;
- (unsigned long long)primitiveSearchPositionValue;
@property unsigned long long searchPositionValue;
- (void)setPrimitiveMediaCountValue:(unsigned long long)arg1;
- (unsigned long long)primitiveMediaCountValue;
@property unsigned long long mediaCountValue;
- (void)setPrimitiveIsFavoritedValue:(BOOL)arg1;
- (BOOL)primitiveIsFavoritedValue;
@property BOOL isFavoritedValue;
- (void)setPrimitiveFrequencyCountValue:(unsigned long long)arg1;
- (unsigned long long)primitiveFrequencyCountValue;
@property unsigned long long frequencyCountValue;
@property(readonly, nonatomic) FLUTagID *objectID;

// Remaining properties
@property(retain, nonatomic) NSSet *comments; // @dynamic comments;
@property(retain, nonatomic) NSDate *favouriteDate; // @dynamic favouriteDate;
@property(retain, nonatomic) NSNumber *frequencyCount; // @dynamic frequencyCount;
@property(retain, nonatomic) NSNumber *isFavorited; // @dynamic isFavorited;
@property(retain, nonatomic) NSSet *media; // @dynamic media;
@property(retain, nonatomic) NSNumber *mediaCount; // @dynamic mediaCount;
@property(retain, nonatomic) NSSet *messages; // @dynamic messages;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *remoteID; // @dynamic remoteID;
@property(retain, nonatomic) NSNumber *searchPosition; // @dynamic searchPosition;
@property(retain, nonatomic) FLUUser *users; // @dynamic users;

@end

