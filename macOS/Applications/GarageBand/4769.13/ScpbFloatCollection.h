//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ScpbFloatCollection : NSObject
{
    NSMutableArray *m_floatControllers;
}

- (void)removeFloatController:(id)arg1;
- (void)addFloatController:(id)arg1;
- (void)createFromFloatDicts:(id)arg1;
- (id)collectFloatsDicts;
- (void)stopTextEdition;
- (void)updateAllFloats;
- (void)showHideAllFloats:(BOOL)arg1;
- (void)closeAllFloats;
- (void)dealloc;
- (id)init;

@end

