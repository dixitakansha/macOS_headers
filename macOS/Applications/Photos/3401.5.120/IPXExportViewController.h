//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSStackViewDelegate-Protocol.h"

@class IPXExportColorSpaceView, IPXExportFileNameView, NSArray, NSBox, NSButton, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSNumber, NSPopUpButton, NSStackView, NSString, NSTextField, NSView, NSWindow, RKExportSettings, RKFileNamingPolicy;

@interface IPXExportViewController : NSViewController <NSStackViewDelegate>
{
    NSWindow *_sheetWindow;
    NSWindow *_appWindow;
    NSArray *_exportVersions;
    long long _photoCount;
    long long _movieCount;
    RKExportSettings *_exportSettings;
    RKFileNamingPolicy *_fileNamingPolicy;
    NSMutableArray *_constraintsAdded;
    BOOL _exportingOriginal;
    NSArray *_keyViewChain;
    NSArray *_collapsibleViews;
    NSMutableDictionary *_collapsedConstraints;
    BOOL _exportTo16Bit;
    BOOL _includeTitleKeywords;
    BOOL _includeLocation;
    BOOL _exportIPTCAsXMP;
    BOOL _photosViewExpanded;
    BOOL _isFromStream;
    NSStackView *_sectionsStackView;
    NSView *_photosViewContainer;
    NSStackView *_photosStackView;
    NSView *_metadataViewContainer;
    NSView *_fileNamingViewContainer;
    NSStackView *_fileNamingStackView;
    NSView *_exportOriginalViewContainer;
    NSView *_exportPhotoFormatContainerView;
    NSView *_exportJpegContainerView;
    NSView *_exportTiffContainerView;
    IPXExportColorSpaceView *_exportColorSpaceContainerView;
    NSView *_exportSizeContainerView;
    NSView *_exportCustomSizeContainerView;
    NSView *_exportMovieContainerView;
    NSView *_exportMetadataContainerView;
    IPXExportFileNameView *_exportFileNameView;
    NSView *_exportSequentialPrefixView;
    NSView *_exportSubfolderFormatView;
    NSView *_exportOriginalIncludeIPTC;
    NSPopUpButton *_photoFormatPopupButton;
    NSPopUpButton *_jpegQualityPopupButton;
    NSPopUpButton *_colorSpacePopupButton;
    NSPopUpButton *_photoSizePopupButton;
    NSBox *_photoSizeCustomBox;
    NSPopUpButton *_movieQualityPopupButton;
    NSPopUpButton *_useFileNamePopupButton;
    NSTextField *_sequentialPrefixTextField;
    NSPopUpButton *_momentNamePopupButton;
    NSButton *_sixteenBitCheckbox;
    NSPopUpButton *_photoCustomSizePopupButton;
    NSTextField *_photoCustomSizeTextField;
    NSButton *_exportAsXMPCheckbox;
    NSButton *_titleKeywordsDescriptionCheckbox;
    NSButton *_locationInformationCheckbox;
    NSButton *_cancelButton;
    NSButton *_exportButton;
    NSButton *_photoKindExpansionButton;
    long long _exportPhotoFormat;
    long long _exportJpegQuality;
    long long _exportMovieQuality;
    long long _exportColorSpacePreset;
    long long _exportSizePreset;
    long long _customSizeDimension;
    NSNumber *_customSizeInPixels;
    long long _fileNamePreset;
    NSString *_fileNameSequentialPrefix;
    long long _subfolderFormat;
    NSLayoutConstraint *_qualityTrailingConstraint;
    NSLayoutConstraint *_popupButtonWidthMatch;
}

+ (id)defaultVersionsExportPreset;
+ (id)defaultNamingPolicy;
+ (void)showExportOriginalFileNamingPolicy:(id)arg1 metadataMode:(int)arg2 exportIntoMomentsSubfolders:(BOOL)arg3 inWindow:(id)arg4 forVersions:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)showExportSettingsDialogForPreset:(id)arg1 fileNamingPolicy:(id)arg2 exportIntoMomentsSubfolders:(BOOL)arg3 inWindow:(id)arg4 forVersions:(id)arg5 isFromStream:(BOOL)arg6 completionHandler:(CDUnknownBlockType)arg7;
@property BOOL isFromStream; // @synthesize isFromStream=_isFromStream;
@property BOOL exportingOriginal; // @synthesize exportingOriginal=_exportingOriginal;
@property __weak NSLayoutConstraint *popupButtonWidthMatch; // @synthesize popupButtonWidthMatch=_popupButtonWidthMatch;
@property __weak NSLayoutConstraint *qualityTrailingConstraint; // @synthesize qualityTrailingConstraint=_qualityTrailingConstraint;
@property(nonatomic) BOOL photosViewExpanded; // @synthesize photosViewExpanded=_photosViewExpanded;
@property(nonatomic) long long subfolderFormat; // @synthesize subfolderFormat=_subfolderFormat;
@property(nonatomic) BOOL exportIPTCAsXMP; // @synthesize exportIPTCAsXMP=_exportIPTCAsXMP;
@property(retain, nonatomic) NSString *fileNameSequentialPrefix; // @synthesize fileNameSequentialPrefix=_fileNameSequentialPrefix;
@property(nonatomic) long long fileNamePreset; // @synthesize fileNamePreset=_fileNamePreset;
@property(retain, nonatomic) NSNumber *customSizeInPixels; // @synthesize customSizeInPixels=_customSizeInPixels;
@property(nonatomic) long long customSizeDimension; // @synthesize customSizeDimension=_customSizeDimension;
@property(nonatomic) long long exportSizePreset; // @synthesize exportSizePreset=_exportSizePreset;
@property(nonatomic) long long exportColorSpacePreset; // @synthesize exportColorSpacePreset=_exportColorSpacePreset;
@property(nonatomic) BOOL includeLocation; // @synthesize includeLocation=_includeLocation;
@property(nonatomic) BOOL includeTitleKeywords; // @synthesize includeTitleKeywords=_includeTitleKeywords;
@property(nonatomic) long long exportMovieQuality; // @synthesize exportMovieQuality=_exportMovieQuality;
@property(nonatomic) long long exportJpegQuality; // @synthesize exportJpegQuality=_exportJpegQuality;
@property(nonatomic) BOOL exportTo16Bit; // @synthesize exportTo16Bit=_exportTo16Bit;
@property(nonatomic) long long exportPhotoFormat; // @synthesize exportPhotoFormat=_exportPhotoFormat;
@property __weak NSButton *photoKindExpansionButton; // @synthesize photoKindExpansionButton=_photoKindExpansionButton;
@property __weak NSButton *exportButton; // @synthesize exportButton=_exportButton;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *locationInformationCheckbox; // @synthesize locationInformationCheckbox=_locationInformationCheckbox;
@property __weak NSButton *titleKeywordsDescriptionCheckbox; // @synthesize titleKeywordsDescriptionCheckbox=_titleKeywordsDescriptionCheckbox;
@property __weak NSButton *exportAsXMPCheckbox; // @synthesize exportAsXMPCheckbox=_exportAsXMPCheckbox;
@property __weak NSTextField *photoCustomSizeTextField; // @synthesize photoCustomSizeTextField=_photoCustomSizeTextField;
@property __weak NSPopUpButton *photoCustomSizePopupButton; // @synthesize photoCustomSizePopupButton=_photoCustomSizePopupButton;
@property __weak NSButton *sixteenBitCheckbox; // @synthesize sixteenBitCheckbox=_sixteenBitCheckbox;
@property __weak NSPopUpButton *momentNamePopupButton; // @synthesize momentNamePopupButton=_momentNamePopupButton;
@property __weak NSTextField *sequentialPrefixTextField; // @synthesize sequentialPrefixTextField=_sequentialPrefixTextField;
@property __weak NSPopUpButton *useFileNamePopupButton; // @synthesize useFileNamePopupButton=_useFileNamePopupButton;
@property __weak NSPopUpButton *movieQualityPopupButton; // @synthesize movieQualityPopupButton=_movieQualityPopupButton;
@property __weak NSBox *photoSizeCustomBox; // @synthesize photoSizeCustomBox=_photoSizeCustomBox;
@property __weak NSPopUpButton *photoSizePopupButton; // @synthesize photoSizePopupButton=_photoSizePopupButton;
@property __weak NSPopUpButton *colorSpacePopupButton; // @synthesize colorSpacePopupButton=_colorSpacePopupButton;
@property __weak NSPopUpButton *jpegQualityPopupButton; // @synthesize jpegQualityPopupButton=_jpegQualityPopupButton;
@property __weak NSPopUpButton *photoFormatPopupButton; // @synthesize photoFormatPopupButton=_photoFormatPopupButton;
@property(retain) NSView *exportOriginalIncludeIPTC; // @synthesize exportOriginalIncludeIPTC=_exportOriginalIncludeIPTC;
@property(retain) NSView *exportSubfolderFormatView; // @synthesize exportSubfolderFormatView=_exportSubfolderFormatView;
@property(retain) NSView *exportSequentialPrefixView; // @synthesize exportSequentialPrefixView=_exportSequentialPrefixView;
@property(retain) IPXExportFileNameView *exportFileNameView; // @synthesize exportFileNameView=_exportFileNameView;
@property(retain) NSView *exportMetadataContainerView; // @synthesize exportMetadataContainerView=_exportMetadataContainerView;
@property(retain) NSView *exportMovieContainerView; // @synthesize exportMovieContainerView=_exportMovieContainerView;
@property(retain) NSView *exportCustomSizeContainerView; // @synthesize exportCustomSizeContainerView=_exportCustomSizeContainerView;
@property(retain) NSView *exportSizeContainerView; // @synthesize exportSizeContainerView=_exportSizeContainerView;
@property(retain) IPXExportColorSpaceView *exportColorSpaceContainerView; // @synthesize exportColorSpaceContainerView=_exportColorSpaceContainerView;
@property(retain) NSView *exportTiffContainerView; // @synthesize exportTiffContainerView=_exportTiffContainerView;
@property(retain) NSView *exportJpegContainerView; // @synthesize exportJpegContainerView=_exportJpegContainerView;
@property(retain) NSView *exportPhotoFormatContainerView; // @synthesize exportPhotoFormatContainerView=_exportPhotoFormatContainerView;
@property __weak NSView *exportOriginalViewContainer; // @synthesize exportOriginalViewContainer=_exportOriginalViewContainer;
@property __weak NSStackView *fileNamingStackView; // @synthesize fileNamingStackView=_fileNamingStackView;
@property __weak NSView *fileNamingViewContainer; // @synthesize fileNamingViewContainer=_fileNamingViewContainer;
@property __weak NSView *metadataViewContainer; // @synthesize metadataViewContainer=_metadataViewContainer;
@property __weak NSStackView *photosStackView; // @synthesize photosStackView=_photosStackView;
@property __weak NSView *photosViewContainer; // @synthesize photosViewContainer=_photosViewContainer;
@property __weak NSStackView *sectionsStackView; // @synthesize sectionsStackView=_sectionsStackView;
- (void).cxx_destruct;
- (void)stackView:(id)arg1 didReattachViews:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (id)exportMovieQualityTagToString:(long long)arg1;
- (long long)exportMovieQualityStringToTag:(id)arg1;
@property BOOL exportIntoMomentNameSubfolders;
@property(retain) RKFileNamingPolicy *fileNamingPolicy;
@property int exportOriginalMetadataMode;
@property(retain) RKExportSettings *exportPreset;
- (void)cancelButtonPressed:(id)arg1;
- (void)exportButtonPressed:(id)arg1;
- (void)configureStackViews;
- (void)setVisibility:(BOOL)arg1 forView:(id)arg2;
- (void)awakeFromNib;
- (void)showSheetForWindow:(id)arg1 withVersions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

