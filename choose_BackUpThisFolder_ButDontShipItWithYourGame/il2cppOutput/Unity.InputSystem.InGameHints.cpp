#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.PlayerInput>
struct Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>[]
struct Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>[]
struct Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>[]
struct Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>[]
struct Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[]
struct ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8;
// UnityEngine.InputSystem.Users.InputUser/UserData[]
struct UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions
struct InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC;
// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample
struct InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.UI.InputSystemUIInputModule
struct InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/IGameplayActions
struct IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent
struct ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48;
// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent
struct DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4;
// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent
struct DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral017B351DA3E50FAF2CFBB408359C6C0480F02932;
IL2CPP_EXTERN_C String_t* _stringLiteral0BFFEB00BD63E7235161198A9BDA4B0EF12AB05D;
IL2CPP_EXTERN_C String_t* _stringLiteral2A474FBC7EC4EA2C1A762D0FB32562808DDDA351;
IL2CPP_EXTERN_C String_t* _stringLiteral2D3C02556940765FE5D7F753B01540FE3632AB01;
IL2CPP_EXTERN_C String_t* _stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral3F7476F507CAB6B1550D21B6F4089D4CDD4E8218;
IL2CPP_EXTERN_C String_t* _stringLiteral4223EBA5706244B7BEF8F1BE58053D80CFDEF51E;
IL2CPP_EXTERN_C String_t* _stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral58C403B2ADB7E09A23001D113CB718A73795DB62;
IL2CPP_EXTERN_C String_t* _stringLiteral60799636775E09F1F0A298E98F82D521B70A100A;
IL2CPP_EXTERN_C String_t* _stringLiteral61225B335304C6BE91EE0EC8CF385BBE9B633F17;
IL2CPP_EXTERN_C String_t* _stringLiteral8AC8DA5E1D4349342A99BD9F2767DB9015CD2DB9;
IL2CPP_EXTERN_C String_t* _stringLiteralAD898C7C950EA0E16E9B5E1CE518BEFA25E126A1;
IL2CPP_EXTERN_C String_t* _stringLiteralCCEFF6A4406B4CB03230EFB7872BA403085DB756;
IL2CPP_EXTERN_C String_t* _stringLiteralCDE5D228A4674E31010EFACE9EBAE56B0F107D96;
IL2CPP_EXTERN_C String_t* _stringLiteralD1D4A4041ADF9CB1AF2588B2FDD2FA25A7638349;
IL2CPP_EXTERN_C String_t* _stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C;
IL2CPP_EXTERN_C String_t* _stringLiteralF6C5E0E3357AAAAB6D08F1AAA3FCD61355233E77;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t174CFBBA282AB801DB7F7956F45624EEC5F55070 
{
};

// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions
struct InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::m_Gameplay
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Gameplay_1;
	// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/IGameplayActions UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::m_GameplayActionsCallbackInterface
	RuntimeObject* ___m_GameplayActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::m_Gameplay_Move
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Gameplay_Move_3;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::m_Gameplay_Look
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Gameplay_Look_4;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::m_Gameplay_PickUp
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Gameplay_PickUp_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::m_Gameplay_Drop
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Gameplay_Drop_6;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::m_Gameplay_Throw
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Gameplay_Throw_7;
	// System.Int32 UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::m_GamepadSchemeIndex
	int32_t ___m_GamepadSchemeIndex_8;
	// System.Int32 UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::m_KeyboardMouseSchemeIndex
	int32_t ___m_KeyboardMouseSchemeIndex_9;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions
struct GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79 
{
	// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::m_Wrapper
	InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions
struct GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshaled_pinvoke
{
	InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* ___m_Wrapper_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions
struct GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshaled_com
{
	InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* ___m_Wrapper_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::userId
	uint32_t ___userId_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>
struct InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8* ___additionalValues_2;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_10;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_11;
	// UnityEngine.InputSystem.InputActionMap/Flags UnityEngine.InputSystem.InputActionMap::m_Flags
	int32_t ___m_Flags_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_13;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionMap::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 
{
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::pairingStateVersion
	int32_t ___pairingStateVersion_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/GlobalState::lastUserId
	uint32_t ___lastUserId_1;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserCount
	int32_t ___allUserCount_2;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDeviceCount
	int32_t ___allPairedDeviceCount_3;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDeviceCount
	int32_t ___allLostDeviceCount_4;
	// UnityEngine.InputSystem.Users.InputUser[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUsers
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___allUsers_5;
	// UnityEngine.InputSystem.Users.InputUser/UserData[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserData
	UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E* ___allUserData_6;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection> UnityEngine.InputSystem.Users.InputUser/GlobalState::ongoingAccountSelections
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onChange
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onUnpairedDeviceUsed
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onPreFilterUnpairedDeviceUsed
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::actionChangeDelegate
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___actionChangeDelegate_13;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChangeDelegate_14;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEventDelegate_15;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onActionChangeHooked
	bool ___onActionChangeHooked_16;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeHooked
	bool ___onDeviceChangeHooked_17;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventHooked
	bool ___onEventHooked_18;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::listenForUnpairedDeviceActivity
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_pinvoke
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_com
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_9;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionAsset::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_10;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_11;
};

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample
struct InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::helpText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___helpText_4;
	// System.Single UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::moveSpeed
	float ___moveSpeed_5;
	// System.Single UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::rotateSpeed
	float ___rotateSpeed_6;
	// System.Single UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::throwForce
	float ___throwForce_7;
	// System.Single UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::pickupDistance
	float ___pickupDistance_8;
	// System.Single UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::holdDistance
	float ___holdDistance_9;
	// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::m_Rotation
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Rotation_10;
	// UnityEngine.InputSystem.PlayerInput UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::m_PlayerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ___m_PlayerInput_11;
	// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample/State UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::m_CurrentState
	int32_t ___m_CurrentState_12;
	// UnityEngine.Transform UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::m_CurrentObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CurrentObject_13;
	// UnityEngine.MaterialPropertyBlock UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::m_PropertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___m_PropertyBlock_14;
	// System.String UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::m_LookAtObjectHelpText
	String_t* ___m_LookAtObjectHelpText_15;
	// System.String UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::m_ThrowObjectHelpText
	String_t* ___m_ThrowObjectHelpText_16;
	// System.Int32 UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::m_UpdateCount
	int32_t ___m_UpdateCount_20;
};

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::m_Actions
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Actions_7;
	// UnityEngine.InputSystem.PlayerNotifications UnityEngine.InputSystem.PlayerInput::m_NotificationBehavior
	int32_t ___m_NotificationBehavior_8;
	// UnityEngine.InputSystem.UI.InputSystemUIInputModule UnityEngine.InputSystem.PlayerInput::m_UIInputModule
	InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58* ___m_UIInputModule_9;
	// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent UnityEngine.InputSystem.PlayerInput::m_DeviceLostEvent
	DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4* ___m_DeviceLostEvent_10;
	// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedEvent
	DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1* ___m_DeviceRegainedEvent_11;
	// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent UnityEngine.InputSystem.PlayerInput::m_ControlsChangedEvent
	ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48* ___m_ControlsChangedEvent_12;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] UnityEngine.InputSystem.PlayerInput::m_ActionEvents
	ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F* ___m_ActionEvents_13;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_NeverAutoSwitchControlSchemes
	bool ___m_NeverAutoSwitchControlSchemes_14;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultControlScheme
	String_t* ___m_DefaultControlScheme_15;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_16;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_SplitScreenIndex
	int32_t ___m_SplitScreenIndex_17;
	// UnityEngine.Camera UnityEngine.InputSystem.PlayerInput::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_18;
	// UnityEngine.InputSystem.InputValue UnityEngine.InputSystem.PlayerInput::m_InputValueObject
	InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___m_InputValueObject_19;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.PlayerInput::m_CurrentActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_CurrentActionMap_20;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_PlayerIndex
	int32_t ___m_PlayerIndex_21;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_InputActive
	bool ___m_InputActive_22;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_Enabled
	bool ___m_Enabled_23;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_ActionsInitialized
	bool ___m_ActionsInitialized_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.InputSystem.PlayerInput::m_ActionMessageNames
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_ActionMessageNames_25;
	// UnityEngine.InputSystem.Users.InputUser UnityEngine.InputSystem.PlayerInput::m_InputUser
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___m_InputUser_26;
	// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredDelegate
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___m_ActionTriggeredDelegate_27;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceLostCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceLostCallbacks_28;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceRegainedCallbacks_29;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_ControlsChangedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_ControlsChangedCallbacks_30;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionTriggeredCallbacks_31;
	// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.PlayerInput::m_UnpairedDeviceUsedDelegate
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___m_UnpairedDeviceUsedDelegate_32;
	// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.PlayerInput::m_PreFilterUnpairedDeviceUsedDelegate
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___m_PreFilterUnpairedDeviceUsedDelegate_33;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnUnpairedDeviceUsedHooked
	bool ___m_OnUnpairedDeviceUsedHooked_34;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.PlayerInput::m_DeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___m_DeviceChangeDelegate_35;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnDeviceChangeHooked
	bool ___m_OnDeviceChangeHooked_36;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions

// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.InputSystem.InputBinding

// UnityEngine.InputSystem.InputBinding

// UnityEngine.InputSystem.InputControlScheme

// UnityEngine.InputSystem.InputControlScheme

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions

// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputActionMap/DeviceArray

// UnityEngine.InputSystem.InputActionMap/DeviceArray

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// System.Delegate

// System.Delegate

// UnityEngine.MaterialPropertyBlock

// UnityEngine.MaterialPropertyBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
};

// UnityEngine.InputSystem.InputActionMap

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.InputSystem.Users.InputUser/GlobalState

// UnityEngine.InputSystem.Users.InputUser/GlobalState

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.InputSystem.InputActionAsset

// UnityEngine.InputSystem.InputActionAsset

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E_StaticFields
{
	// UnityEngine.InputSystem.Users.InputUser/GlobalState UnityEngine.InputSystem.Users.InputUser::s_GlobalState
	GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 ___s_GlobalState_2;
};

// UnityEngine.InputSystem.Users.InputUser

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample

// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_AllActivePlayersCount
	int32_t ___s_AllActivePlayersCount_37;
	// UnityEngine.InputSystem.PlayerInput[] UnityEngine.InputSystem.PlayerInput::s_AllActivePlayers
	PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080* ___s_AllActivePlayers_38;
	// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.PlayerInput::s_UserChangeDelegate
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___s_UserChangeDelegate_39;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevicesCount
	int32_t ___s_InitPairWithDevicesCount_40;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___s_InitPairWithDevices_41;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPlayerIndex
	int32_t ___s_InitPlayerIndex_42;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitSplitScreenIndex
	int32_t ___s_InitSplitScreenIndex_43;
	// System.String UnityEngine.InputSystem.PlayerInput::s_InitControlScheme
	String_t* ___s_InitControlScheme_44;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::s_DestroyIfDeviceSetupUnsuccessful
	bool ___s_DestroyIfDeviceSetupUnsuccessful_45;
};

// UnityEngine.InputSystem.PlayerInput

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_gshared (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C (String_t* ___0_json, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___0_nameOrId, bool ___1_throwIfNotFound, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___0_actionNameOrId, bool ___1_throwIfNotFound, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___0_value, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameHintsActions_GetEnumerator_mE0A7C14419A80362DD64C88A587603C1FC5DA091 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___0_actionNameOrId, bool ___1_throwIfNotFound, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___0_mask, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___1_action, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::.ctor(UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameplayActions__ctor_mC122180DFB5A948DAFCEA7CC7C75607AA41EB1AC_inline (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* ___0_wrapper, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindControlSchemeIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>::get_Item(System.Int32)
inline InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 (*) (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9*, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_gshared)(__this, ___0_index, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_Look()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_PickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* GameplayActions_Get_m06D0AA6FD324BD74F1EA3735886027175F1A41A1 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_Enable_mEE143177183ACC5DE89BED6C1A990091E73A80F2 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_Disable_m10C5C77C0C27BA59EFCA418AABDFC72E502B1BA7 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameplayActions_get_enabled_mB3F5549E8810188C407B2DD67881DB62E75858CE (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::SetCallbacks(UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/IGameplayActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_SetCallbacks_mCA25290209CFA94473F59224ED56B0FF5E1D9290 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, RuntimeObject* ___0_instance, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.InputSystem.PlayerInput>()
inline PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::ChangeState(UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_ChangeState_m615BEA72F8C757F965CD27776F32BC36D5BC6F6D (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, int32_t ___0_newState, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::UpdateUIHints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_UpdateUIHints_m72D0D7F7A6CC3CCECB55E1C7A03EAC84864F74CA (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, bool ___0_regenerate, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::get_actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___0_actionNameOrId, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::Move(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_Move_m64942ED52178BE38434F8052FE544AD51DBF197B (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::Look(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_Look_m08141A5B561A9F493B7D29E571474055B93F3CE9 (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_rotate, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_isStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_isStatic_mB88ADDE2E0D3544FACC287E9B49AFA116C07FB66 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m5B4E910B5E42518BBD0088055EB68E4A3A609DDE (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_properties, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.InputAction::get_triggered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::PickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_PickUp_m49D4C21E3B3DBD3B4E6A2FB1C5949507C43A93A6 (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::Throw(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_Throw_mCF5778ACDCB143CAFBA9506AB451F1058CA80782 (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, bool ___0_drop, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputActionRebindingExtensions::GetBindingDisplayString(UnityEngine.InputSystem.InputAction,UnityEngine.InputSystem.InputBinding/DisplayStringOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputActionRebindingExtensions_GetBindingDisplayString_m462F1CD98BBC4FF95A17466547B731D20B379C60 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t ___1_options, String_t* ___2_group, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsActions__ctor_m219294D8278E2A9974D4DEF01D65135941734C7A (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A474FBC7EC4EA2C1A762D0FB32562808DDDA351);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4223EBA5706244B7BEF8F1BE58053D80CFDEF51E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCEFF6A4406B4CB03230EFB7872BA403085DB756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1D4A4041ADF9CB1AF2588B2FDD2FA25A7638349);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int m_GamepadSchemeIndex = -1;
		__this->___m_GamepadSchemeIndex_8 = (-1);
		// private int m_KeyboardMouseSchemeIndex = -1;
		__this->___m_KeyboardMouseSchemeIndex_9 = (-1);
		// public @InGameHintsActions()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//             asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""InGameHintsActions"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Gameplay"",
		//             ""id"": ""9af2d1b0-cc47-4300-854c-838acb4b168b"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Move"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""7e7492e7-1329-48bb-9fdc-279fd15473b4"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Look"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""981fecc2-2e7a-4d6a-b041-00b47626e0a1"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""PickUp"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""5a59bbc2-a3d4-4cbd-88bb-01120d97dc69"",
		//                     ""expectedControlType"": """",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""Drop"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""f37bbe7e-e241-443f-b868-c784e1219f25"",
		//                     ""expectedControlType"": """",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""Throw"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""e450d71c-7cc5-4879-afb5-f3ed682d9824"",
		//                     ""expectedControlType"": """",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""5abc4d20-74bd-4f14-902f-2bd2cf59cc28"",
		//                     ""path"": ""<Gamepad>/leftStick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Gamepad"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""WASD"",
		//                     ""id"": ""b16141b1-1611-44db-9576-5a004eb451f2"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""2b20de3f-1ad8-4b42-b591-595edf60dced"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""2f92eaa9-7f1f-4f42-9682-d105f7c2fc22"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""3ba79a56-c5f8-4999-8203-bef8471f4bd8"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""8d9acfe6-d844-4860-a151-01d6eb0dfb48"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""b69cbeb7-a5bf-4df1-8965-17d944634cef"",
		//                     ""path"": ""<Gamepad>/rightStick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Gamepad"",
		//                     ""action"": ""Look"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""b2ddefc9-49da-485d-be28-58e3ec3f8080"",
		//                     ""path"": ""<Mouse>/delta"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Look"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""92182492-7b62-47e0-94ad-53d9937d9905"",
		//                     ""path"": ""<Gamepad>/buttonSouth"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Gamepad"",
		//                     ""action"": ""PickUp"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""e20635aa-ffe7-4ed9-8802-96c039d26a8f"",
		//                     ""path"": ""<Keyboard>/q"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""PickUp"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""f5571cd9-1166-4ddc-9071-37dc597b1d4e"",
		//                     ""path"": ""<Gamepad>/buttonEast"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Gamepad"",
		//                     ""action"": ""Drop"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""950f549e-ec9c-4d03-aeff-f09ec4031d01"",
		//                     ""path"": ""<Keyboard>/e"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Drop"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""47d1952d-797b-4f5b-986c-654b8e479deb"",
		//                     ""path"": ""<Gamepad>/buttonSouth"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Gamepad"",
		//                     ""action"": ""Throw"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""02e2493d-1eb3-4334-9d25-92f2b5e21399"",
		//                     ""path"": ""<Keyboard>/space"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Throw"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": [
		//         {
		//             ""name"": ""Gamepad"",
		//             ""bindingGroup"": ""Gamepad"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Gamepad>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Keyboard&Mouse"",
		//             ""bindingGroup"": ""Keyboard&Mouse"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Keyboard>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 },
		//                 {
		//                     ""devicePath"": ""<Mouse>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         }
		//     ]
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C(_stringLiteralCCEFF6A4406B4CB03230EFB7872BA403085DB756, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_0);
		// m_Gameplay = asset.FindActionMap("Gameplay", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_1);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6, (bool)1, NULL);
		__this->___m_Gameplay_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gameplay_1), (void*)L_2);
		// m_Gameplay_Move = m_Gameplay.FindAction("Move", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = __this->___m_Gameplay_1;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_3, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, (bool)1, NULL);
		__this->___m_Gameplay_Move_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gameplay_Move_3), (void*)L_4);
		// m_Gameplay_Look = m_Gameplay.FindAction("Look", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_5 = __this->___m_Gameplay_1;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_5, _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F, (bool)1, NULL);
		__this->___m_Gameplay_Look_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gameplay_Look_4), (void*)L_6);
		// m_Gameplay_PickUp = m_Gameplay.FindAction("PickUp", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_7 = __this->___m_Gameplay_1;
		NullCheck(L_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_7, _stringLiteral4223EBA5706244B7BEF8F1BE58053D80CFDEF51E, (bool)1, NULL);
		__this->___m_Gameplay_PickUp_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gameplay_PickUp_5), (void*)L_8);
		// m_Gameplay_Drop = m_Gameplay.FindAction("Drop", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_9 = __this->___m_Gameplay_1;
		NullCheck(L_9);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_9, _stringLiteralD1D4A4041ADF9CB1AF2588B2FDD2FA25A7638349, (bool)1, NULL);
		__this->___m_Gameplay_Drop_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gameplay_Drop_6), (void*)L_10);
		// m_Gameplay_Throw = m_Gameplay.FindAction("Throw", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_11 = __this->___m_Gameplay_1;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_11, _stringLiteral2A474FBC7EC4EA2C1A762D0FB32562808DDDA351, (bool)1, NULL);
		__this->___m_Gameplay_Throw_7 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gameplay_Throw_7), (void*)L_12);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsActions_Dispose_m9BBBEF373282AC84F753E0C63CE467A58E5EDF94 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InGameHintsActions_get_bindingMask_m98349BB3FE496015B9C49866ED0CB209AF555F8A (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsActions_set_bindingMask_mBB9AA9F06DB7F0A017A43E25DB800B5A72D8B136 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___0_value;
		NullCheck(L_0);
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InGameHintsActions_get_devices_m559CC6ADC4B50E20EAAE1BCF5912FB0E00E85FC3 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsActions_set_devices_mC8895426B1F8B64D263CBE8393AF5263E26A652B (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___0_value, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___0_value;
		NullCheck(L_0);
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InGameHintsActions_get_controlSchemes_m5167D656610A8D5655A005298369A3018547EBA1 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_0);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InGameHintsActions_Contains_m4484892E3E633C15E390B22D2A1AE9433270D003 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___0_action;
		NullCheck(L_0);
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameHintsActions_GetEnumerator_mE0A7C14419A80362DD64C88A587603C1FC5DA091 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameHintsActions_System_Collections_IEnumerable_GetEnumerator_m910DC81D4CD5B53E2C1DC1D53F983945966FEF2C (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = InGameHintsActions_GetEnumerator_mE0A7C14419A80362DD64C88A587603C1FC5DA091(__this, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsActions_Enable_mB9619D0198033A9688AF35E5FE5065267F8CDA84 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsActions_Disable_m00D8260C8485A7CDF97C33FAC8281F070400352A (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameHintsActions_get_bindings_mD89031519890B55792A0DE9ED94BABA051421EAE (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InGameHintsActions_FindAction_m82B50A33ABAFE8A02CA061F55C84AC6574388FB2 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, String_t* ___0_actionNameOrId, bool ___1_throwIfNotFound, const RuntimeMethod* method) 
{
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		String_t* L_1 = ___0_actionNameOrId;
		bool L_2 = ___1_throwIfNotFound;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InGameHintsActions_FindBinding_m7587289FA4251F9C7925B6E5C98F03AB6C60A9AC (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___0_bindingMask, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___1_action, const RuntimeMethod* method) 
{
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___0_bindingMask;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___1_action;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::get_Gameplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79 InGameHintsActions_get_Gameplay_mCC58EE87AC93F392FEEC6BAE6871D6D93C9D77F6 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// public GameplayActions @Gameplay => new GameplayActions(this);
		GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79 L_0;
		memset((&L_0), 0, sizeof(L_0));
		GameplayActions__ctor_mC122180DFB5A948DAFCEA7CC7C75607AA41EB1AC_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::get_GamepadScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 InGameHintsActions_get_GamepadScheme_m7747D5A286A971272B4772DDE9C9ED79EE5272A9 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61225B335304C6BE91EE0EC8CF385BBE9B633F17);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_GamepadSchemeIndex == -1) m_GamepadSchemeIndex = asset.FindControlSchemeIndex("Gamepad");
		int32_t L_0 = __this->___m_GamepadSchemeIndex_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (m_GamepadSchemeIndex == -1) m_GamepadSchemeIndex = asset.FindControlSchemeIndex("Gamepad");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_1, _stringLiteral61225B335304C6BE91EE0EC8CF385BBE9B633F17, NULL);
		__this->___m_GamepadSchemeIndex_8 = L_2;
	}

IL_001f:
	{
		// return asset.controlSchemes[m_GamepadSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_3;
		L_3 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_4;
		L_4 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_GamepadSchemeIndex_8;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_6;
		L_6 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_0), L_5, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		return L_6;
	}
}
// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions::get_KeyboardMouseScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 InGameHintsActions_get_KeyboardMouseScheme_mEE5D006F8DA70B6887DE3E377964590BA5523050 (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral017B351DA3E50FAF2CFBB408359C6C0480F02932);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_KeyboardMouseSchemeIndex == -1) m_KeyboardMouseSchemeIndex = asset.FindControlSchemeIndex("Keyboard&Mouse");
		int32_t L_0 = __this->___m_KeyboardMouseSchemeIndex_9;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (m_KeyboardMouseSchemeIndex == -1) m_KeyboardMouseSchemeIndex = asset.FindControlSchemeIndex("Keyboard&Mouse");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_1, _stringLiteral017B351DA3E50FAF2CFBB408359C6C0480F02932, NULL);
		__this->___m_KeyboardMouseSchemeIndex_9 = L_2;
	}

IL_001f:
	{
		// return asset.controlSchemes[m_KeyboardMouseSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_3;
		L_3 = InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline(__this, NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_4;
		L_4 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_KeyboardMouseSchemeIndex_9;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_6;
		L_6 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_0), L_5, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions
IL2CPP_EXTERN_C void GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshal_pinvoke(const GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79& unmarshaled, GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GameplayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshal_pinvoke_back(const GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshaled_pinvoke& marshaled, GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GameplayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions
IL2CPP_EXTERN_C void GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshal_pinvoke_cleanup(GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions
IL2CPP_EXTERN_C void GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshal_com(const GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79& unmarshaled, GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GameplayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshal_com_back(const GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshaled_com& marshaled, GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GameplayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions
IL2CPP_EXTERN_C void GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshal_com_cleanup(GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::.ctor(UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions__ctor_mC122180DFB5A948DAFCEA7CC7C75607AA41EB1AC (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* ___0_wrapper, const RuntimeMethod* method) 
{
	{
		// public GameplayActions(@InGameHintsActions wrapper) { m_Wrapper = wrapper; }
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_0 = ___0_wrapper;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public GameplayActions(@InGameHintsActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void GameplayActions__ctor_mC122180DFB5A948DAFCEA7CC7C75607AA41EB1AC_AdjustorThunk (RuntimeObject* __this, InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* ___0_wrapper, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	GameplayActions__ctor_mC122180DFB5A948DAFCEA7CC7C75607AA41EB1AC_inline(_thisAdjusted, ___0_wrapper, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Move => m_Wrapper.m_Gameplay_Move;
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Gameplay_Move_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_Look()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Look => m_Wrapper.m_Gameplay_Look;
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Gameplay_Look_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_PickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @PickUp => m_Wrapper.m_Gameplay_PickUp;
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Gameplay_PickUp_5;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Drop => m_Wrapper.m_Gameplay_Drop;
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Gameplay_Drop_6;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Throw => m_Wrapper.m_Gameplay_Throw;
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Gameplay_Throw_7;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* GameplayActions_Get_m06D0AA6FD324BD74F1EA3735886027175F1A41A1 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Gameplay; }
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Gameplay_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* GameplayActions_Get_m06D0AA6FD324BD74F1EA3735886027175F1A41A1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = GameplayActions_Get_m06D0AA6FD324BD74F1EA3735886027175F1A41A1(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_Enable_mEE143177183ACC5DE89BED6C1A990091E73A80F2 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = GameplayActions_Get_m06D0AA6FD324BD74F1EA3735886027175F1A41A1(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void GameplayActions_Enable_mEE143177183ACC5DE89BED6C1A990091E73A80F2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	GameplayActions_Enable_mEE143177183ACC5DE89BED6C1A990091E73A80F2(_thisAdjusted, method);
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_Disable_m10C5C77C0C27BA59EFCA418AABDFC72E502B1BA7 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = GameplayActions_Get_m06D0AA6FD324BD74F1EA3735886027175F1A41A1(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void GameplayActions_Disable_m10C5C77C0C27BA59EFCA418AABDFC72E502B1BA7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	GameplayActions_Disable_m10C5C77C0C27BA59EFCA418AABDFC72E502B1BA7(_thisAdjusted, method);
}
// System.Boolean UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameplayActions_get_enabled_mB3F5549E8810188C407B2DD67881DB62E75858CE (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = GameplayActions_Get_m06D0AA6FD324BD74F1EA3735886027175F1A41A1(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool GameplayActions_get_enabled_mB3F5549E8810188C407B2DD67881DB62E75858CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	bool _returnValue;
	_returnValue = GameplayActions_get_enabled_mB3F5549E8810188C407B2DD67881DB62E75858CE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::op_Implicit(UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* GameplayActions_op_Implicit_m72C615D52A07B3E87F6E9A82935FD461D7C36D2E (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79 ___0_set, const RuntimeMethod* method) 
{
	{
		// public static implicit operator InputActionMap(GameplayActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = GameplayActions_Get_m06D0AA6FD324BD74F1EA3735886027175F1A41A1((&___0_set), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/GameplayActions::SetCallbacks(UnityEngine.InputSystem.Samples.InGameHints.InGameHintsActions/IGameplayActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_SetCallbacks_mCA25290209CFA94473F59224ED56B0FF5E1D9290 (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, RuntimeObject* ___0_instance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_GameplayActionsCallbackInterface != null)
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_GameplayActionsCallbackInterface_2;
		if (!L_1)
		{
			goto IL_020e;
		}
	}
	{
		// @Move.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_3 = __this->___m_Wrapper_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_5 = L_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, L_5, (intptr_t)((void*)GetInterfaceMethodInfo(L_5, 0, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_2);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_2, L_6, NULL);
		// @Move.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_8 = __this->___m_Wrapper_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_10 = L_9;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, L_10, (intptr_t)((void*)GetInterfaceMethodInfo(L_10, 0, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_7);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_7, L_11, NULL);
		// @Move.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_13 = __this->___m_Wrapper_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_15 = L_14;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, L_15, (intptr_t)((void*)GetInterfaceMethodInfo(L_15, 0, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_12);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_12, L_16, NULL);
		// @Look.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_18 = __this->___m_Wrapper_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_20 = L_19;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_21 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_21, L_20, (intptr_t)((void*)GetInterfaceMethodInfo(L_20, 1, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_17);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_17, L_21, NULL);
		// @Look.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_23 = __this->___m_Wrapper_0;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_25 = L_24;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_26 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_26, L_25, (intptr_t)((void*)GetInterfaceMethodInfo(L_25, 1, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_22);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_22, L_26, NULL);
		// @Look.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27;
		L_27 = GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_28 = __this->___m_Wrapper_0;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_30 = L_29;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, L_30, (intptr_t)((void*)GetInterfaceMethodInfo(L_30, 1, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_27);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_27, L_31, NULL);
		// @PickUp.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnPickUp;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_33 = __this->___m_Wrapper_0;
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_35 = L_34;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_36 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_36, L_35, (intptr_t)((void*)GetInterfaceMethodInfo(L_35, 2, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_32);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_32, L_36, NULL);
		// @PickUp.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnPickUp;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37;
		L_37 = GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_38 = __this->___m_Wrapper_0;
		NullCheck(L_38);
		RuntimeObject* L_39 = L_38->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_40 = L_39;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_41 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_41, L_40, (intptr_t)((void*)GetInterfaceMethodInfo(L_40, 2, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_37);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_37, L_41, NULL);
		// @PickUp.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnPickUp;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_42;
		L_42 = GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_43 = __this->___m_Wrapper_0;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_45 = L_44;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_46 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_46, L_45, (intptr_t)((void*)GetInterfaceMethodInfo(L_45, 2, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_42);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_42, L_46, NULL);
		// @Drop.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDrop;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_47;
		L_47 = GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_48 = __this->___m_Wrapper_0;
		NullCheck(L_48);
		RuntimeObject* L_49 = L_48->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_50 = L_49;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_51 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_51, L_50, (intptr_t)((void*)GetInterfaceMethodInfo(L_50, 3, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_47);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_47, L_51, NULL);
		// @Drop.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDrop;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_52;
		L_52 = GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_53 = __this->___m_Wrapper_0;
		NullCheck(L_53);
		RuntimeObject* L_54 = L_53->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_55 = L_54;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_56 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_56, L_55, (intptr_t)((void*)GetInterfaceMethodInfo(L_55, 3, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_52);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_52, L_56, NULL);
		// @Drop.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDrop;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_57;
		L_57 = GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_58 = __this->___m_Wrapper_0;
		NullCheck(L_58);
		RuntimeObject* L_59 = L_58->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_60 = L_59;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_61 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_61, L_60, (intptr_t)((void*)GetInterfaceMethodInfo(L_60, 3, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_57);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_57, L_61, NULL);
		// @Throw.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnThrow;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_62;
		L_62 = GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_63 = __this->___m_Wrapper_0;
		NullCheck(L_63);
		RuntimeObject* L_64 = L_63->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_65 = L_64;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_66 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_66, L_65, (intptr_t)((void*)GetInterfaceMethodInfo(L_65, 4, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_62);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_62, L_66, NULL);
		// @Throw.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnThrow;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_67;
		L_67 = GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_68 = __this->___m_Wrapper_0;
		NullCheck(L_68);
		RuntimeObject* L_69 = L_68->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_70 = L_69;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_71 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_71, L_70, (intptr_t)((void*)GetInterfaceMethodInfo(L_70, 4, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_67);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_67, L_71, NULL);
		// @Throw.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnThrow;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_72;
		L_72 = GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4(__this, NULL);
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_73 = __this->___m_Wrapper_0;
		NullCheck(L_73);
		RuntimeObject* L_74 = L_73->___m_GameplayActionsCallbackInterface_2;
		RuntimeObject* L_75 = L_74;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_76 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_76, L_75, (intptr_t)((void*)GetInterfaceMethodInfo(L_75, 4, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_72);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_72, L_76, NULL);
	}

IL_020e:
	{
		// m_Wrapper.m_GameplayActionsCallbackInterface = instance;
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_77 = __this->___m_Wrapper_0;
		RuntimeObject* L_78 = ___0_instance;
		NullCheck(L_77);
		L_77->___m_GameplayActionsCallbackInterface_2 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&L_77->___m_GameplayActionsCallbackInterface_2), (void*)L_78);
		// if (instance != null)
		RuntimeObject* L_79 = ___0_instance;
		if (!L_79)
		{
			goto IL_0388;
		}
	}
	{
		// @Move.started += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_80;
		L_80 = GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843(__this, NULL);
		RuntimeObject* L_81 = ___0_instance;
		RuntimeObject* L_82 = L_81;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_83 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_83, L_82, (intptr_t)((void*)GetInterfaceMethodInfo(L_82, 0, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_80);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_80, L_83, NULL);
		// @Move.performed += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_84;
		L_84 = GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843(__this, NULL);
		RuntimeObject* L_85 = ___0_instance;
		RuntimeObject* L_86 = L_85;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_87 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_87, L_86, (intptr_t)((void*)GetInterfaceMethodInfo(L_86, 0, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_84);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_84, L_87, NULL);
		// @Move.canceled += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_88;
		L_88 = GameplayActions_get_Move_m33A28BB3924CC74462B40F1496C2BD623896E843(__this, NULL);
		RuntimeObject* L_89 = ___0_instance;
		RuntimeObject* L_90 = L_89;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_91 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_91, L_90, (intptr_t)((void*)GetInterfaceMethodInfo(L_90, 0, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_88);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_88, L_91, NULL);
		// @Look.started += instance.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_92;
		L_92 = GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052(__this, NULL);
		RuntimeObject* L_93 = ___0_instance;
		RuntimeObject* L_94 = L_93;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_95 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_95, L_94, (intptr_t)((void*)GetInterfaceMethodInfo(L_94, 1, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_92);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_92, L_95, NULL);
		// @Look.performed += instance.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_96;
		L_96 = GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052(__this, NULL);
		RuntimeObject* L_97 = ___0_instance;
		RuntimeObject* L_98 = L_97;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_99 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_99);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_99, L_98, (intptr_t)((void*)GetInterfaceMethodInfo(L_98, 1, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_96);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_96, L_99, NULL);
		// @Look.canceled += instance.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_100;
		L_100 = GameplayActions_get_Look_m769B4F9ABC72E2573316DDD12A3CC9D2A238F052(__this, NULL);
		RuntimeObject* L_101 = ___0_instance;
		RuntimeObject* L_102 = L_101;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_103 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_103);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_103, L_102, (intptr_t)((void*)GetInterfaceMethodInfo(L_102, 1, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_100);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_100, L_103, NULL);
		// @PickUp.started += instance.OnPickUp;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_104;
		L_104 = GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610(__this, NULL);
		RuntimeObject* L_105 = ___0_instance;
		RuntimeObject* L_106 = L_105;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_107 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_107);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_107, L_106, (intptr_t)((void*)GetInterfaceMethodInfo(L_106, 2, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_104);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_104, L_107, NULL);
		// @PickUp.performed += instance.OnPickUp;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_108;
		L_108 = GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610(__this, NULL);
		RuntimeObject* L_109 = ___0_instance;
		RuntimeObject* L_110 = L_109;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_111 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_111);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_111, L_110, (intptr_t)((void*)GetInterfaceMethodInfo(L_110, 2, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_108);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_108, L_111, NULL);
		// @PickUp.canceled += instance.OnPickUp;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_112;
		L_112 = GameplayActions_get_PickUp_m1F582B111BF8AEABC1679FF0BD9C298FD76E6610(__this, NULL);
		RuntimeObject* L_113 = ___0_instance;
		RuntimeObject* L_114 = L_113;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_115 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_115);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_115, L_114, (intptr_t)((void*)GetInterfaceMethodInfo(L_114, 2, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_112);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_112, L_115, NULL);
		// @Drop.started += instance.OnDrop;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_116;
		L_116 = GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480(__this, NULL);
		RuntimeObject* L_117 = ___0_instance;
		RuntimeObject* L_118 = L_117;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_119 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_119);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_119, L_118, (intptr_t)((void*)GetInterfaceMethodInfo(L_118, 3, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_116);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_116, L_119, NULL);
		// @Drop.performed += instance.OnDrop;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_120;
		L_120 = GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480(__this, NULL);
		RuntimeObject* L_121 = ___0_instance;
		RuntimeObject* L_122 = L_121;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_123 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_123);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_123, L_122, (intptr_t)((void*)GetInterfaceMethodInfo(L_122, 3, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_120);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_120, L_123, NULL);
		// @Drop.canceled += instance.OnDrop;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_124;
		L_124 = GameplayActions_get_Drop_m3160AEAB84752D4F1674F35DD42D46A1DA19C480(__this, NULL);
		RuntimeObject* L_125 = ___0_instance;
		RuntimeObject* L_126 = L_125;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_127 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_127);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_127, L_126, (intptr_t)((void*)GetInterfaceMethodInfo(L_126, 3, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_124);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_124, L_127, NULL);
		// @Throw.started += instance.OnThrow;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_128;
		L_128 = GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4(__this, NULL);
		RuntimeObject* L_129 = ___0_instance;
		RuntimeObject* L_130 = L_129;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_131 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_131);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_131, L_130, (intptr_t)((void*)GetInterfaceMethodInfo(L_130, 4, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_128);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_128, L_131, NULL);
		// @Throw.performed += instance.OnThrow;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_132;
		L_132 = GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4(__this, NULL);
		RuntimeObject* L_133 = ___0_instance;
		RuntimeObject* L_134 = L_133;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_135 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_135);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_135, L_134, (intptr_t)((void*)GetInterfaceMethodInfo(L_134, 4, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_132);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_132, L_135, NULL);
		// @Throw.canceled += instance.OnThrow;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_136;
		L_136 = GameplayActions_get_Throw_mFBE05F5589C50FD9943922C69C9B77E9DB944EB4(__this, NULL);
		RuntimeObject* L_137 = ___0_instance;
		RuntimeObject* L_138 = L_137;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_139 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_139);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_139, L_138, (intptr_t)((void*)GetInterfaceMethodInfo(L_138, 4, IGameplayActions_tCDC55FA022F075F1D21409BC21E0BC33DFA6999F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_136);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_136, L_139, NULL);
	}

IL_0388:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GameplayActions_SetCallbacks_mCA25290209CFA94473F59224ED56B0FF5E1D9290_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_instance, const RuntimeMethod* method)
{
	GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79*>(__this + _offset);
	GameplayActions_SetCallbacks_mCA25290209CFA94473F59224ED56B0FF5E1D9290(_thisAdjusted, ___0_instance, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_Awake_m5042C34FE259AE822618286BB4984A2D810C53EA (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlayerInput = GetComponent<PlayerInput>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0;
		L_0 = Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89(__this, Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		__this->___m_PlayerInput_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlayerInput_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_OnEnable_m1E4A318427C6FEA4C2251EFB8DE2B7340C4B60CA (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, const RuntimeMethod* method) 
{
	{
		// ChangeState(State.Wandering);
		InGameHintsExample_ChangeState_m615BEA72F8C757F965CD27776F32BC36D5BC6F6D(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::OnControlsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_OnControlsChanged_m7D8F688692D6846434023BB2806E41F0338BE5EF (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, const RuntimeMethod* method) 
{
	{
		// UpdateUIHints(regenerate: true); // Force re-generation of our cached text strings to pick up new bindings.
		InGameHintsExample_UpdateUIHints_m72D0D7F7A6CC3CCECB55E1C7A03EAC84864F74CA(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_Update_m8260FFBA8EE410CCAF16FF2590C4729BB214DD75 (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58C403B2ADB7E09A23001D113CB718A73795DB62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD898C7C950EA0E16E9B5E1CE518BEFA25E126A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDE5D228A4674E31010EFACE9EBAE56B0F107D96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// var move = m_PlayerInput.actions["move"].ReadValue<Vector2>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->___m_PlayerInput_11;
		NullCheck(L_0);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_0, NULL);
		NullCheck(L_1);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_1, _stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C, NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_2, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		V_0 = L_3;
		// var look = m_PlayerInput.actions["look"].ReadValue<Vector2>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_4 = __this->___m_PlayerInput_11;
		NullCheck(L_4);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_5;
		L_5 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_4, NULL);
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_5, _stringLiteral58C403B2ADB7E09A23001D113CB718A73795DB62, NULL);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_6, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		V_1 = L_7;
		// Move(move);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		InGameHintsExample_Move_m64942ED52178BE38434F8052FE544AD51DBF197B(__this, L_8, NULL);
		// Look(look);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		InGameHintsExample_Look_m08141A5B561A9F493B7D29E571474055B93F3CE9(__this, L_9, NULL);
		// switch (m_CurrentState)
		int32_t L_10 = __this->___m_CurrentState_12;
		V_3 = L_10;
		int32_t L_11 = V_3;
		if ((!(((uint32_t)L_11) > ((uint32_t)1))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_0168;
		}
	}
	{
		return;
	}

IL_0057:
	{
		// if (Physics.Raycast(transform.position, transform.forward, out var hitInfo,
		//     pickupDistance) && !hitInfo.collider.gameObject.isStatic)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		float L_17 = __this->___pickupDistance_8;
		bool L_18;
		L_18 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_14, L_16, (&V_2), L_17, NULL);
		if (!L_18)
		{
			goto IL_00fb;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_19;
		L_19 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_2), NULL);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		bool L_21;
		L_21 = GameObject_get_isStatic_mB88ADDE2E0D3544FACC287E9B49AFA116C07FB66(L_20, NULL);
		if (L_21)
		{
			goto IL_00fb;
		}
	}
	{
		// if (m_CurrentState != State.ObjectInSights)
		int32_t L_22 = __this->___m_CurrentState_12;
		if ((((int32_t)L_22) == ((int32_t)1)))
		{
			goto IL_009f;
		}
	}
	{
		// ChangeState(State.ObjectInSights);
		InGameHintsExample_ChangeState_m615BEA72F8C757F965CD27776F32BC36D5BC6F6D(__this, 1, NULL);
	}

IL_009f:
	{
		// m_CurrentObject = hitInfo.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_2), NULL);
		__this->___m_CurrentObject_13 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentObject_13), (void*)L_23);
		// if (m_PropertyBlock == null)
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_24 = __this->___m_PropertyBlock_14;
		if (L_24)
		{
			goto IL_00e3;
		}
	}
	{
		// m_PropertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_25 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_25, NULL);
		__this->___m_PropertyBlock_14 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertyBlock_14), (void*)L_25);
		// m_PropertyBlock.SetColor("_Color", new Color(0.75f, 0, 0));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_26 = __this->___m_PropertyBlock_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		memset((&L_27), 0, sizeof(L_27));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_27), (0.75f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		MaterialPropertyBlock_SetColor_m5B4E910B5E42518BBD0088055EB68E4A3A609DDE(L_26, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_27, NULL);
	}

IL_00e3:
	{
		// m_CurrentObject.GetComponent<MeshRenderer>().SetPropertyBlock(m_PropertyBlock);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___m_CurrentObject_13;
		NullCheck(L_28);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_29;
		L_29 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_28, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_30 = __this->___m_PropertyBlock_14;
		NullCheck(L_29);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_29, L_30, NULL);
		goto IL_0130;
	}

IL_00fb:
	{
		// else if (m_CurrentState != State.Wandering)
		int32_t L_31 = __this->___m_CurrentState_12;
		if (!L_31)
		{
			goto IL_0130;
		}
	}
	{
		// ChangeState(State.Wandering);
		InGameHintsExample_ChangeState_m615BEA72F8C757F965CD27776F32BC36D5BC6F6D(__this, 0, NULL);
		// if (m_CurrentObject != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___m_CurrentObject_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_0130;
		}
	}
	{
		// m_CurrentObject.GetComponent<Renderer>().SetPropertyBlock(null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___m_CurrentObject_13;
		NullCheck(L_34);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_35;
		L_35 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_34, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_35);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_35, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, NULL);
		// m_CurrentObject = null;
		__this->___m_CurrentObject_13 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentObject_13), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_0130:
	{
		// if (m_PlayerInput.actions["pickup"].triggered && m_CurrentObject != null)
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_36 = __this->___m_PlayerInput_11;
		NullCheck(L_36);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_37;
		L_37 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_36, NULL);
		NullCheck(L_37);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_38;
		L_38 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_37, _stringLiteralCDE5D228A4674E31010EFACE9EBAE56B0F107D96, NULL);
		NullCheck(L_38);
		bool L_39;
		L_39 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_38, NULL);
		if (!L_39)
		{
			goto IL_01bd;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___m_CurrentObject_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_01bd;
		}
	}
	{
		// PickUp();
		InGameHintsExample_PickUp_m49D4C21E3B3DBD3B4E6A2FB1C5949507C43A93A6(__this, NULL);
		// ChangeState(State.ObjectPickedUp);
		InGameHintsExample_ChangeState_m615BEA72F8C757F965CD27776F32BC36D5BC6F6D(__this, 2, NULL);
		// break;
		return;
	}

IL_0168:
	{
		// if (m_PlayerInput.actions["throw"].triggered)
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_42 = __this->___m_PlayerInput_11;
		NullCheck(L_42);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_43;
		L_43 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_42, NULL);
		NullCheck(L_43);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_44;
		L_44 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_43, _stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC, NULL);
		NullCheck(L_44);
		bool L_45;
		L_45 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_44, NULL);
		if (!L_45)
		{
			goto IL_0193;
		}
	}
	{
		// Throw();
		InGameHintsExample_Throw_mCF5778ACDCB143CAFBA9506AB451F1058CA80782(__this, (bool)0, NULL);
		// ChangeState(State.Wandering);
		InGameHintsExample_ChangeState_m615BEA72F8C757F965CD27776F32BC36D5BC6F6D(__this, 0, NULL);
		return;
	}

IL_0193:
	{
		// else if (m_PlayerInput.actions["drop"].triggered)
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_46 = __this->___m_PlayerInput_11;
		NullCheck(L_46);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_47;
		L_47 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_46, NULL);
		NullCheck(L_47);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_48;
		L_48 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_47, _stringLiteralAD898C7C950EA0E16E9B5E1CE518BEFA25E126A1, NULL);
		NullCheck(L_48);
		bool L_49;
		L_49 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_48, NULL);
		if (!L_49)
		{
			goto IL_01bd;
		}
	}
	{
		// Throw(drop: true);
		InGameHintsExample_Throw_mCF5778ACDCB143CAFBA9506AB451F1058CA80782(__this, (bool)1, NULL);
		// ChangeState(State.Wandering);
		InGameHintsExample_ChangeState_m615BEA72F8C757F965CD27776F32BC36D5BC6F6D(__this, 0, NULL);
	}

IL_01bd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::ChangeState(UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_ChangeState_m615BEA72F8C757F965CD27776F32BC36D5BC6F6D (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, int32_t ___0_newState, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_newState;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0012;
			}
			case 1:
			{
				goto IL_0012;
			}
			case 2:
			{
				goto IL_0012;
			}
		}
	}

IL_0012:
	{
		// m_CurrentState = newState;
		int32_t L_1 = ___0_newState;
		__this->___m_CurrentState_12 = L_1;
		// UpdateUIHints();
		InGameHintsExample_UpdateUIHints_m72D0D7F7A6CC3CCECB55E1C7A03EAC84864F74CA(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::UpdateUIHints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_UpdateUIHints_m72D0D7F7A6CC3CCECB55E1C7A03EAC84864F74CA (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, bool ___0_regenerate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BFFEB00BD63E7235161198A9BDA4B0EF12AB05D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D3C02556940765FE5D7F753B01540FE3632AB01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F7476F507CAB6B1550D21B6F4089D4CDD4E8218);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60799636775E09F1F0A298E98F82D521B70A100A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AC8DA5E1D4349342A99BD9F2767DB9015CD2DB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD898C7C950EA0E16E9B5E1CE518BEFA25E126A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDE5D228A4674E31010EFACE9EBAE56B0F107D96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6C5E0E3357AAAAB6D08F1AAA3FCD61355233E77);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (regenerate)
		bool L_0 = ___0_regenerate;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// m_ThrowObjectHelpText = default;
		__this->___m_ThrowObjectHelpText_16 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ThrowObjectHelpText_16), (void*)(String_t*)NULL);
		// m_LookAtObjectHelpText = default;
		__this->___m_LookAtObjectHelpText_15 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LookAtObjectHelpText_15), (void*)(String_t*)NULL);
	}

IL_0011:
	{
		// switch (m_CurrentState)
		int32_t L_1 = __this->___m_CurrentState_12;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_00e1;
	}

IL_0025:
	{
		// if (m_LookAtObjectHelpText == null)
		String_t* L_4 = __this->___m_LookAtObjectHelpText_15;
		if (L_4)
		{
			goto IL_005e;
		}
	}
	{
		// m_LookAtObjectHelpText = kLookAtObjectHelpTextFormat.Replace("{pickup}",
		//     m_PlayerInput.actions["pickup"].GetBindingDisplayString());
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_5 = __this->___m_PlayerInput_11;
		NullCheck(L_5);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_6;
		L_6 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_5, NULL);
		NullCheck(L_6);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_6, _stringLiteralCDE5D228A4674E31010EFACE9EBAE56B0F107D96, NULL);
		String_t* L_8;
		L_8 = InputActionRebindingExtensions_GetBindingDisplayString_m462F1CD98BBC4FF95A17466547B731D20B379C60(L_7, 0, (String_t*)NULL, NULL);
		NullCheck(_stringLiteral2D3C02556940765FE5D7F753B01540FE3632AB01);
		String_t* L_9;
		L_9 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(_stringLiteral2D3C02556940765FE5D7F753B01540FE3632AB01, _stringLiteral0BFFEB00BD63E7235161198A9BDA4B0EF12AB05D, L_8, NULL);
		__this->___m_LookAtObjectHelpText_15 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LookAtObjectHelpText_15), (void*)L_9);
	}

IL_005e:
	{
		// helpText.text = m_LookAtObjectHelpText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___helpText_4;
		String_t* L_11 = __this->___m_LookAtObjectHelpText_15;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// break;
		return;
	}

IL_0070:
	{
		// if (m_ThrowObjectHelpText == null)
		String_t* L_12 = __this->___m_ThrowObjectHelpText_16;
		if (L_12)
		{
			goto IL_00cf;
		}
	}
	{
		// m_ThrowObjectHelpText = kThrowObjectHelpTextFormat
		//     .Replace("{throw}", m_PlayerInput.actions["throw"].GetBindingDisplayString())
		//     .Replace("{drop}", m_PlayerInput.actions["drop"].GetBindingDisplayString());
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_13 = __this->___m_PlayerInput_11;
		NullCheck(L_13);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_14;
		L_14 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_13, NULL);
		NullCheck(L_14);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15;
		L_15 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_14, _stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC, NULL);
		String_t* L_16;
		L_16 = InputActionRebindingExtensions_GetBindingDisplayString_m462F1CD98BBC4FF95A17466547B731D20B379C60(L_15, 0, (String_t*)NULL, NULL);
		NullCheck(_stringLiteral3F7476F507CAB6B1550D21B6F4089D4CDD4E8218);
		String_t* L_17;
		L_17 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(_stringLiteral3F7476F507CAB6B1550D21B6F4089D4CDD4E8218, _stringLiteral8AC8DA5E1D4349342A99BD9F2767DB9015CD2DB9, L_16, NULL);
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_18 = __this->___m_PlayerInput_11;
		NullCheck(L_18);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_19;
		L_19 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_18, NULL);
		NullCheck(L_19);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_20;
		L_20 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_19, _stringLiteralAD898C7C950EA0E16E9B5E1CE518BEFA25E126A1, NULL);
		String_t* L_21;
		L_21 = InputActionRebindingExtensions_GetBindingDisplayString_m462F1CD98BBC4FF95A17466547B731D20B379C60(L_20, 0, (String_t*)NULL, NULL);
		NullCheck(L_17);
		String_t* L_22;
		L_22 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_17, _stringLiteralF6C5E0E3357AAAAB6D08F1AAA3FCD61355233E77, L_21, NULL);
		__this->___m_ThrowObjectHelpText_16 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ThrowObjectHelpText_16), (void*)L_22);
	}

IL_00cf:
	{
		// helpText.text = m_ThrowObjectHelpText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___helpText_4;
		String_t* L_24 = __this->___m_ThrowObjectHelpText_16;
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_24);
		// break;
		return;
	}

IL_00e1:
	{
		// helpText.text = kDefaultHelpTextFormat;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___helpText_4;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, _stringLiteral60799636775E09F1F0A298E98F82D521B70A100A);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::Throw(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_Throw_mCF5778ACDCB143CAFBA9506AB451F1058CA80782 (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, bool ___0_drop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	{
		// m_CurrentObject.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_CurrentObject_13;
		NullCheck(L_0);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_0, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// var rigidBody = m_CurrentObject.GetComponent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_CurrentObject_13;
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_1, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_0 = L_2;
		// rigidBody.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_0;
		NullCheck(L_3);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_3, (bool)0, NULL);
		// if (!drop)
		bool L_4 = ___0_drop;
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		// rigidBody.AddForce(transform.forward * throwForce, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		float L_8 = __this->___throwForce_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		NullCheck(L_5);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_5, L_9, 1, NULL);
	}

IL_003f:
	{
		// m_CurrentObject = null;
		__this->___m_CurrentObject_13 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentObject_13), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::PickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_PickUp_m49D4C21E3B3DBD3B4E6A2FB1C5949507C43A93A6 (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_CurrentObject.position = default;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_CurrentObject_13;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// m_CurrentObject.SetParent(transform, worldPositionStays: false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_CurrentObject_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_3, (bool)0, NULL);
		// m_CurrentObject.localPosition += new Vector3(0, 0, holdDistance);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_CurrentObject_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		float L_7 = __this->___holdDistance_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_8, NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_9, NULL);
		// m_CurrentObject.GetComponent<Renderer>().SetPropertyBlock(null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_CurrentObject_13;
		NullCheck(L_10);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11;
		L_11 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_10, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_11);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_11, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, NULL);
		// m_CurrentObject.GetComponent<Rigidbody>().isKinematic = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___m_CurrentObject_13;
		NullCheck(L_12);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13;
		L_13 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_12, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_13);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_13, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::Move(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_Move_m64942ED52178BE38434F8052FE544AD51DBF197B (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (direction.sqrMagnitude < 0.01)
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___0_direction), NULL);
		if ((!(((double)((double)L_0)) < ((double)(0.01)))))
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// var scaledMoveSpeed = moveSpeed * Time.deltaTime;
		float L_1 = __this->___moveSpeed_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// var move = Quaternion.Euler(0, transform.eulerAngles.y, 0) * new Vector3(direction.x, 0, direction.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_5, (0.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___0_direction;
		float L_8 = L_7.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_direction;
		float L_10 = L_9.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, (0.0f), L_10, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_6, L_11, NULL);
		V_1 = L_12;
		// transform.position += move * scaledMoveSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_18, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_19, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::Look(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample_Look_m08141A5B561A9F493B7D29E571474055B93F3CE9 (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_rotate, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (rotate.sqrMagnitude < 0.01)
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___0_rotate), NULL);
		if ((!(((double)((double)L_0)) < ((double)(0.01)))))
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// var scaledRotateSpeed = rotateSpeed * Time.deltaTime;
		float L_1 = __this->___rotateSpeed_6;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// m_Rotation.y += rotate.x * scaledRotateSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___m_Rotation_10);
		float* L_4 = (&L_3->___y_1);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___0_rotate;
		float L_8 = L_7.___x_0;
		float L_9 = V_0;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_8, L_9))));
		// m_Rotation.x = Mathf.Clamp(m_Rotation.x - rotate.y * scaledRotateSpeed, -89, 89);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___m_Rotation_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___m_Rotation_10);
		float L_12 = L_11->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___0_rotate;
		float L_14 = L_13.___y_1;
		float L_15 = V_0;
		float L_16;
		L_16 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_12, ((float)il2cpp_codegen_multiply(L_14, L_15)))), (-89.0f), (89.0f), NULL);
		L_10->___x_0 = L_16;
		// transform.localEulerAngles = m_Rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___m_Rotation_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		NullCheck(L_17);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_17, L_19, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InGameHints.InGameHintsExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameHintsExample__ctor_m53CBD703402F86C579F64C611CCA10E201997DC9 (InGameHintsExample_t7844045F35CC564490DC38CA2778353A27B0BED2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InGameHintsActions_get_asset_mEA17F5E18CC68E855E7DBB6799D7601A553F41EF_inline (InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameplayActions__ctor_mC122180DFB5A948DAFCEA7CC7C75607AA41EB1AC_inline (GameplayActions_t299A0441C1F985F093283129A7FA8F8983D05E79* __this, InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* ___0_wrapper, const RuntimeMethod* method) 
{
	{
		// public GameplayActions(@InGameHintsActions wrapper) { m_Wrapper = wrapper; }
		InGameHintsActions_t9CB6BEE928D3153AF775CEE2E0E5E99FD5F151BC* L_0 = ___0_wrapper;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public GameplayActions(@InGameHintsActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
