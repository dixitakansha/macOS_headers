//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKInfoCardTheme-Protocol.h>

@class NSColor, NSDictionary, NSFont, NSPointerArray, NSString;

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme>
{
    BOOL _themeWasExplicitySet;
    NSDictionary *_colors;
    NSPointerArray *_viewListeners;
    NSPointerArray *_viewControllerListeners;
    NSPointerArray *_otherListeners;
    CDUnknownBlockType _tintColorProvider;
    NSColor *_currentTintColor;
    BOOL _useSmallFont;
    unsigned long long _themeType;
}

+ (void)addThemeChangedListener:(id)arg1;
+ (void)setUseSmallFont:(BOOL)arg1;
+ (void)setTintColorProvider:(CDUnknownBlockType)arg1;
+ (void)setTheme:(unsigned long long)arg1;
+ (id)themeWithThemeType:(unsigned long long)arg1;
+ (id)_currentTheme:(unsigned long long)arg1;
+ (id)currentTheme;
+ (BOOL)_shouldAutoSwitchTheme;
@property(nonatomic) BOOL useSmallFont; // @synthesize useSmallFont=_useSmallFont;
@property(readonly, nonatomic) unsigned long long themeType; // @synthesize themeType=_themeType;
- (void).cxx_destruct;
- (id)iconFontToMatch:(id)arg1;
@property(readonly, nonatomic) NSFont *rowGlyphButtonFont;
@property(readonly, nonatomic) NSFont *rowButtonFont;
@property(readonly, nonatomic) NSFont *smallAttributionFont;
@property(readonly, nonatomic) NSFont *attributionFont;
@property(readonly, nonatomic) NSFont *sectionHeaderButtonFont;
@property(readonly, nonatomic) NSFont *sectionHeaderFont;
@property(readonly, nonatomic) NSFont *mediumBodyFont;
@property(readonly, nonatomic) NSFont *boldBodyFont;
@property(readonly, nonatomic) NSFont *bodyFont;
@property(readonly, nonatomic) NSFont *titleFont;
@property(readonly, nonatomic) NSFont *brandTitleFont;
@property(readonly, nonatomic) NSFont *largeTitleFont;
@property(readonly, nonatomic) NSFont *largeTitleFontStatic;
@property(readonly, nonatomic) NSColor *tintColor;
@property(readonly, nonatomic) NSColor *headerSecondaryButtonHighlightedColor;
@property(readonly, nonatomic) NSColor *headerSecondaryButtonNormalColor;
@property(readonly, nonatomic) NSColor *headerPrimaryButtonHighlightedColor;
@property(readonly, nonatomic) NSColor *headerPrimaryButtonNormalColor;
@property(readonly, nonatomic) NSColor *normalActionRowBackgroundPressedColor;
@property(readonly, nonatomic) NSColor *disabledActionRowBackgroundColor;
@property(readonly, nonatomic) NSColor *normalActionRowBackgroundColor;
@property(readonly, nonatomic) NSColor *disabledActionRowTextColor;
@property(readonly, nonatomic) NSColor *highlightedActionRowTextColor;
@property(readonly, nonatomic) NSColor *selectedRowColor;
@property(readonly, nonatomic) NSColor *rowColor;
@property(readonly, nonatomic) NSColor *separatorLineColor;
@property(readonly, nonatomic) NSColor *highlightedTintColor;
@property(readonly, nonatomic) NSColor *backgroundColor;
@property(readonly, nonatomic) NSColor *lightTextColor;
@property(readonly, nonatomic) NSColor *textColor;
@property(readonly, nonatomic) BOOL isVibrantTheme;
@property(readonly, nonatomic) BOOL isDarkTheme;
- (void)_addThemeChangedListener:(id)arg1;
- (void)_notifyAllListenersOfThemeChange:(id)arg1 visitedSet:(id)arg2 subListenerMethod:(CDUnknownFunctionPointerType)arg3 subListenerSelector:(SEL)arg4;
- (void)_setTintColorProvider:(CDUnknownBlockType)arg1;
- (void)_notifyAllListenersOfTintChange:(id)arg1 visitedSet:(id)arg2;
- (void)_tintColorDidChange;
- (void)_setTheme:(unsigned long long)arg1;
- (void)_interfaceThemeChanged;
- (unsigned long long)_currentSystemTheme;
- (id)_initWithThemeType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

