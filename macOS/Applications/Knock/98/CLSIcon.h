//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CLSIcon : NSObject
{
    NSData *_data;
    NSString *_dataHash;
    struct CGSize _size;
    BOOL _prerendered;
}

@property(readonly, nonatomic) BOOL prerendered; // @synthesize prerendered=_prerendered;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSString *dataHash; // @synthesize dataHash=_dataHash;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (BOOL)largerThanSize:(struct CGSize)arg1;
@property(readonly, nonatomic) BOOL isWithinMaxSurfaceArea;
@property(readonly, nonatomic) double surfaceArea;
- (id)initWithImage:(id)arg1;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2 prerendered:(BOOL)arg3;
- (id)initWithData:(id)arg1 dataHash:(id)arg2 size:(struct CGSize)arg3 prerendered:(BOOL)arg4;
- (id)init;
- (void)dealloc;

@end

