//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface KNShowcastCursor : NSObject
{
    NSString *_slideIdentifier;
    unsigned long long _eventIndex;
}

@property(readonly, nonatomic) unsigned long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property(readonly, nonatomic) NSString *slideIdentifier; // @synthesize slideIdentifier=_slideIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithSlideIdentifier:(id)arg1 eventIndex:(unsigned long long)arg2;

@end

