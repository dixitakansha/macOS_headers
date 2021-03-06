//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPXSerializableStyleProperty-Protocol.h"

@class EPXBorderProperties;

@interface EPXBorder : NSObject <EPXSerializableStyleProperty>
{
    EPXBorderProperties *mBorderProperties;
    int mSide;
}

- (void).cxx_destruct;
- (void)serializeToDictionary:(id)arg1;
- (int)side;
- (void)setSpace:(struct EPXLength)arg1 forBorderSide:(int)arg2;
- (struct EPXLength)spaceForBorderSide:(int)arg1;
- (BOOL)isPaddingOverridden;
- (void)setPadding:(struct EPXLength)arg1;
- (struct EPXLength)padding;
- (BOOL)isMarginOverridden;
- (void)setMargin:(struct EPXLength)arg1;
- (struct EPXLength)margin;
- (BOOL)isStyleOverridden;
- (void)setStyle:(int)arg1;
- (int)style;
- (BOOL)isColorOverridden;
- (void)setColor:(id)arg1;
- (id)color;
- (BOOL)isOffsetOverridden;
- (void)setOffset:(float)arg1;
- (float)offset;
- (BOOL)isWidthOverridden;
- (void)setWidth:(float)arg1;
- (float)width;
- (id)initWithSide:(int)arg1;
- (void)serializeToDictionary:(id)arg1 forSide:(id)arg2;

@end

