#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import "DRCTSGetPreferencesDataManagedObjectBuilder.h"
#import "DRCTSGetTablesMetaManagedObjectBuilder.h"

#import "DRCTSGetPreferencesManagedObject.h"
#import "DRCTSGetPreferences.h"

/**
* directus.io
* API for directus.io
*
* OpenAPI spec version: 1.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


@interface DRCTSGetPreferencesManagedObjectBuilder : NSObject

@property (nonatomic, strong) DRCTSGetTablesMetaManagedObjectBuilder * metaBuilder;
@property (nonatomic, strong) DRCTSGetPreferencesDataManagedObjectBuilder * dataBuilder;


-(DRCTSGetPreferencesManagedObject*)createNewDRCTSGetPreferencesManagedObjectInContext:(NSManagedObjectContext*)context;

-(DRCTSGetPreferencesManagedObject*)DRCTSGetPreferencesManagedObjectFromDRCTSGetPreferences:(DRCTSGetPreferences*)object context:(NSManagedObjectContext*)context;

-(void)updateDRCTSGetPreferencesManagedObject:(DRCTSGetPreferencesManagedObject*)object withDRCTSGetPreferences:(DRCTSGetPreferences*)object2;

-(DRCTSGetPreferences*)DRCTSGetPreferencesFromDRCTSGetPreferencesManagedObject:(DRCTSGetPreferencesManagedObject*)obj;

-(void)updateDRCTSGetPreferences:(DRCTSGetPreferences*)object withDRCTSGetPreferencesManagedObject:(DRCTSGetPreferencesManagedObject*)object2;

@end