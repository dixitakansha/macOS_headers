//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IconCompiler/ICIcns.h>

@class NSDictionary;

@interface ISMutableIcns : ICIcns
{
}

@property(retain) NSDictionary *userInfo; // @dynamic userInfo;
@property(retain) ICIcns *templateVariant;
@property(retain) ICIcns *selectedVariant;
- (void)removeValueAtIndex:(int)arg1;
- (void)setData:(id)arg1 atIndex:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithType:(unsigned int)arg1;
- (BOOL)addCGImage:(struct CGImage *)arg1 scale:(unsigned int)arg2 error:(id *)arg3;

// Remaining properties
@property unsigned int type;

@end

