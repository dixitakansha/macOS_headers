//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMATemplateManagerBaseWindowController.h"

@class TMATemplatePreferencesTitleBarView, TSATemplateInfo;

@interface TMATemplatePreferencesSheetController : TMATemplateManagerBaseWindowController
{
    TSATemplateInfo *_selectedTemplateInfo;
    TMATemplatePreferencesTitleBarView *_topTitleBarView;
}

@property(nonatomic) TMATemplatePreferencesTitleBarView *topTitleBarView; // @synthesize topTitleBarView=_topTitleBarView;
@property(retain, nonatomic) TSATemplateInfo *selectedTemplateInfo; // @synthesize selectedTemplateInfo=_selectedTemplateInfo;
- (void).cxx_destruct;
- (id)makeTouchBar;
- (BOOL)useConfigurationForSheet;
- (void)didChooseTemplate:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_endSheetWithReturnCode:(long long)arg1;
- (void)setupWindowAfterLayout;
- (void)setupWindow;
- (BOOL)usesDefaultWindowSize;
- (id)customCategorySelectorProvider;
- (id)windowNibName;

@end

